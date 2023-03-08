#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: input
 *
 * return: 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
