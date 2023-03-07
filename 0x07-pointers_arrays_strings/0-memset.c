#include <stdio.h>

/**
 * _memset - Entry point
 * @b: input
 * @*s: input
 * @n: input
 * @s: input
 * Return: 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;

	s = b;
	while (n--)
	{
		*p++ = (unsigned char) n;
	}
	return (s);
}
