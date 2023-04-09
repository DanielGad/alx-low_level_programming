#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: input first number
 * @m: input second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int curr;
	unsigned long int exclu = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curr = exclu >> j;
		if (curr & 1)
			count++;
	}

	return (count);
}
