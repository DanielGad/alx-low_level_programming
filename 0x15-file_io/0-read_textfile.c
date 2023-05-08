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
	char *buffy;
	ssize_t fddy;
	ssize_t wyy;
	ssize_t tyy;

	fddy = open(filename, O_RDONLY);
	if (fddy == -1)
	return (0);
	buffy = malloc(sizeof(char) * letters);
	tyy = read(fddy, buffy, letters);
	wyy = write(STDOUT_FILENO, buffy, tyy);
	free(buffy);
	close(fddy);
	return (wyy);
}

