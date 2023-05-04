#include "main.h"
/**
 * print_binary - prints the binary number
 * @n: input number
 */
void print_binary(unsigned long int n)
{
	int jj, count = 0;
	unsigned long int cur;

	for (jj = 63; jj >= 0; jj--)
	{
		cur = n >> jj;

		if (cur & 1)
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

