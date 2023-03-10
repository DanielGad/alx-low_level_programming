#include <stdio.h>
#include "main.h"

/**
 * print_square - prints the character # as a square
 * @size: the size of the sqaure to be printed
 */
void print_square(int size)
{
	int breadth, length = 0;

	if (size > 0)
	{
		do {
			for (breadth = 0; breadth < size; breadth++)
			{
				putchar('#');
			}
			putchar('\n');

			length++;
		} while (length < breadth);
	}
	else
		putchar('\n');
	return (0);
}
