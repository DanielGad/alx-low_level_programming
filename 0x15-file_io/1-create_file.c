#include "main.h"

/**
 * create_file - Entry point, Creates a file.
 * @filename: input a pointer to the name of the file to create.
 * @text_content: input a pointer to a string to write to the file.
 *
 * Return: -1 if the function fails, otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdy, wy, lent = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}
	fdy = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wy = write(fdy, text_content, lent);
	if (fdy == -1 || w == -1)
		return (-1);
	close(fdy);
	return (1);
}
