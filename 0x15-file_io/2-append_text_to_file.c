#include "main.h"

/**
 * append_text_to_file - Entry point, appends text at the end of a file.
 * @filename: input a pointer to the name of the file.
 * @text_content: input the string to add to the end of the file.
 *
 * Return: -1, If the function fails or NULL, otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int oyy, wyy, lenty = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lenty = 0; text_content[lenty];)
		lenty++;
	}
	oyy = open(filename, O_WRONLY | O_APPEND);
	wyy = write(oyy, text_content, lenty);
	if (oyy == -1 || wyy == -1)
		return (-1);
	close(oyy);
	return (1);
}

