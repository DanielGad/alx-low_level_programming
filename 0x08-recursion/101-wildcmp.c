#include <stdio.h>
#include <string.h>
/**
 * wildcmp - Entry point
 * @s1: input
 * @s2: input
 *
 * Description: function that compares two stringd and returns 1 if the strings can be considered identical.
 * Return: 1 if the strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);

}
