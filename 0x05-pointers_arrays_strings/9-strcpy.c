#include <stdio.h>

/**
 * _strcpy - Entry point
 * @dest: input
 * @src: input
 * Return: 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
