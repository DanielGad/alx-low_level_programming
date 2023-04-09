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
	int oy, wy, lent = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
		lent++;
	}
	oy = open(filename, O_WRONLY | O_APPEND);
	wy = write(oy, text_content, lent);
	if (oy == -1 || wy == -1)
		return (-1);
	close(oy);
	return (1);
}
