#include <stdio.h>

/**
 * _print_rev_recursion - Entry point
 * @s: input
 *
 * Description: print a string in reverse
 * return: success (0);
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
