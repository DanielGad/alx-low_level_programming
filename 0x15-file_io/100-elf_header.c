#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>

#define ELF_MAGIC_SIZE 4
#define ELF_CLASS_SIZE 1
#define ELF_DATA_SIZE 1
#define ELF_VERSION_SIZE 1
#define ELF_OSABI_SIZE 1
#define ELF_ABIVERSION_SIZE 1
#define ELF_TYPE_SIZE 2
#define ELF_ENTRY_SIZE 8

typedef struct {
    uint8_t magic[ELF_MAGIC_SIZE];
    uint8_t class;
    uint8_t data;
    uint8_t version;
    uint8_t osabi;
    uint8_t abiversion;
    uint8_t pad[7];
    uint16_t type;
    uint64_t entry;
} ElfHeader;

void print_error(const char *message) {
    fprintf(stderr, "%s: %s\n", message, strerror(errno));
    exit(98);
}

void print_elf_header(const ElfHeader *header) {
    printf("Magic:   %02x %02x %02x %02x\n",
           header->magic[0], header->magic[1],
           header->magic[2], header->magic[3]);

    printf("Class:                             ");
    switch (header->class) {
        case 1:
            printf("ELF32\n");
            break;
        case 2:
            printf("ELF64\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("Data:                              ");
    switch (header->data) {
        case 1:
            printf("2's complement, little endian\n");
            break;
        case 2:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("Version:                           %d (current)\n", header->version);

    printf("OS/ABI:                            ");
    switch (header->osabi) {
        case 0:
            printf("UNIX System V ABI\n");
            break;
        case 1:
            printf("HP-UX\n");
            break;
        case 2:
            printf("NetBSD\n");
            break;
        case 3:
            printf("Linux\n");
            break;
        case 6:
            printf("Sun Solaris\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("ABI Version:                       %d\n", header->abiversion);

    printf("Type:                              ");
    switch (header->type) {
        case 1:
            printf("REL (Relocatable file)\n");
            break;
        case 2:
            printf("EXEC (Executable file)\n");
            break;
        case 3:
            printf("DYN (Shared object file)\n");
            break;
        case 4:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("Entry point address:               0x%lx\n", header->entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Failed to open the file");
    }
	    ElfHeader header;
    if (read(fd, &header, sizeof(ElfHeader)) != sizeof(ElfHeader)) {
        print_error("Failed to read ELF header");
    }

    // Check ELF magic number
    if (memcmp(header.magic, "\x7F""ELF", ELF_MAGIC_SIZE) != 0) {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(98);
    }

    // Print ELF header information
    print_elf_header(&header);

    close(fd);
    return 0;
}

