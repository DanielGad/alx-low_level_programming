#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Entry point, Read text file print to STDOUT.
 * @filename: input text file being read
 * @letters: input number of letters to be read
 * Return: w- actual number of bytes, 0 when function fails or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fdy;
	ssize_t wy;
	ssize_t ty;

	fdy = open(filename, O_RDONLY);
	if (fdy == -1)
	return (0);
	buff = malloc(sizeof(char) * letters);
	ty = read(fdy, buff, letters);
	wy = write(STDOUT_FILENO, buff, ty);
	free(buff);
	close(fdy);
	return (wy);
}
