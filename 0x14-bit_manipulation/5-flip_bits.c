#include "main.h"
/**
 * flip_bits - counts the number of bits
 * @n: input first number
 * @m: input second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int jj, count = 0;
	unsigned long int cur;
	unsigned long int exclu = n ^ m;

	for (jj = 63; jj >= 0; jj--)
	{
		cur = exclu >> jj;
		if (cur & 1)
			count++;
	}

	return (count);
}

