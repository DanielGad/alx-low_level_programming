#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - Entry point
 * @s: input
 *
 * Return: 1 if a string is a palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	else if (s[0] != s[len - 1])
	{
		return (0);
	}
	else
	{
		s[len - 1] = '\0';
		return (is_palindrome(&s[1]));
	}
}
