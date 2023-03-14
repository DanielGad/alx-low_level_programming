#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Entry point
 * @s1: Input 1
 * @s2: input 2
 * Return: NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (s3 == NULL)
		return (NULL);

	while ((s3[i] = s1[i]) != '\0')
		i++;

	s3 = strcat(s3, s2);

	return (s3);
}
