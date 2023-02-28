#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: input
 * @n: input
 * Return: 0 (success)
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
