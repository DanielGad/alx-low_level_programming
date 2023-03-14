#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entry point
 * @str: input
 * Return: 1 (succes)
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	while ((new_str[i] = str[i]) != '\0')
		i++;

	return (new_str);
}
