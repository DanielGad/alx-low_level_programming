#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10X 0 - 14
 */
void more_numbers(void)
{
	int i = 0, j;

	do {
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				putchar((j / 10) + '0');

			putchar((j % 10) + '0');
		}

		putchar('\n');

		i++;
	} while (i < 10);
	return (0);
}
