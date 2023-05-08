#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Afunction that allocates 1024 bytes for a buffer.
 * @file: input the name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffery;

	buffery = malloc(sizeof(char) * 1024);
	if (buffery == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffery);
}

/**
 * close_file - A function that closes file descriptors.
 * @fd: Input the file descriptor to be closed.
 */
void close_file(int fd)
{
	int dy;
	dy = close(fd);

	if (dy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Afunction that copies the contents of a file to another file.
 * @argc: Input the number of arguments supplied to the program.
 * @argv: Input an array of pointers to the arguments.
 *
 * Return: 0 success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fromyy, toyy, ryy, wyy;
	char *buffery;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffery = create_buffer(argv[2]);
	fromyy = open(argv[1], O_RDONLY);
	ryy = read(fromyy, buffery, 1024);
	toyy = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fromyy == -1 || ryy == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffery);
			exit(98);
		}
		wyy = write(toyy, buffery, ryy);
		if (toyy == -1 || wyy == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffery);
			exit(99);
		}
		ryy = read(fromyy, buffery, 1024);
		toyy = open(argv[2], O_WRONLY | O_APPEND);
	} while (ryy > 0);

	free(buffery);
	close_file(fromyy);
	close_file(toyy);

	return (0);
}

