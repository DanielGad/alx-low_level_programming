#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: strings
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
