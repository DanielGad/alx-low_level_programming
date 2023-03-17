#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - Entry point
 * @s1: input 1
 * @s2: input 2
 * @n: input 3
 * Description - it concatenates two strings.
 * Return: if n >= the length of s2, (success) otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, i, j;
	char *newMem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = s2len = 0;

	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;

	if (n >= s2len)
		n = s2len;
	newMem = malloc(s1len + n + 1);

	if (newMem == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		newMem[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		newMem[i] = s2[j];
		i++;
		j++;
	}
	newMem[i] = '\0';
	return (newMem);
}
