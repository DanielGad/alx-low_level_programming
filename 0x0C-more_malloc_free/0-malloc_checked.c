#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * malloc_checked - Entry point
 * @b: input
 * Description - It allocates memory using malloc
 * Return: p (success)
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
