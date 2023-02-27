#include "main.h"
#include <stdio.h>
/**
 * swap_int - Entry point
 * @a: An integer a
 * @b: An integer b
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
