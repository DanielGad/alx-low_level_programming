#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - A function that allocates 1024 bytes for a buffer.
 * @file: input the name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - A function that Closes file descriptors.
 * @fd: input the file descriptor to be closed.
 */
void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A function that copies the contents of a file to another file.
 * @argc: input the number of arguments supplied to the program.
 * @argv: input an array of pointers to the arguments.
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	int fromy, toy, ry, wy;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	fromy = open(argv[1], O_RDONLY);
	ry = read(fromy, buff, 1024);
	toy = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fromy == -1 || ry == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wy = write(toy, buff, ry);
		if (toy == -1 || wy == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		ry = read(fromy, buff, 1024);
		toy = open(argv[2], O_WRONLY | O_APPEND);
	} while (ry > 0);

	free(buff);
	close_file(fromy);
	close_file(toy);

	return (0);
}
