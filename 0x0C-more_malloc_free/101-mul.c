#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print - Entry point
 * @str: input
 * @l: input
 * Description - A program that multiplies two positive numbers.
 * Return: (success) otherwise 0
 */
void print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str)
}
