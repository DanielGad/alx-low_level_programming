#include "main.h"

/**
 * create_file - Entry point, Creates a file.
 * @filename: input a pointer to the name of the file to create.
 * @text_content: input a pointer to a string to write to the file.
 * Return: -1 if the function fails, otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdyy, wyy, lenty = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lenty = 0; text_content[lenty];)
			lenty++;
	}
	fdyy = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wyy = write(fdyy, text_content, lenty);
	if (fdyy == -1 || wyy == -1)
		return (-1);
	close(fdyy);
	return (1);
}

