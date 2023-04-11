#include "main.h"

/**
 * print_binary - prints the binary number
 * @n: input number
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int curr;

	for (j = 63; j >= 0; j--)
	{
		curr = n >> j;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
