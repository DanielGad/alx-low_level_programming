#include "main.h"

/**
 * binary_to_uint - convert a binary number
 * @b: string input
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int jj;
	unsigned int dec_val = 0;
	if (!b)
		return (0);

	for (jj = 0; b[jj]; jj++)
	{
		if (b[jj] < '0' || b[jj] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[jj] - '0');
	}
	return (dec_val);
}

