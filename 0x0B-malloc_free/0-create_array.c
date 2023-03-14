#include <stdlib.h>
#include "main.h"


/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char initializer
 * Return: NULL (success)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(size * sizeof(char));

	if  (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';

	return (p);
}

