#include "main.h"
#include <stdio.h>

/**
 * puts_half - Entry point
 * @str: string
 * Return 0 (success)
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
