#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * calloc - Entry point
 * @nmemb: input
 * @size: input
 * Description - it allocate memory for an array using malloc.
 * Return: NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
