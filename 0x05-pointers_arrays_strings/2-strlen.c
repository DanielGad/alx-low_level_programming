#include "main.h"
#include <stdio.h>

/**
 * _strlen -  Entry point
 *
 * @s: string
 *
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
