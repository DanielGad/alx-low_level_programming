#include "main.h"

/**
 * set_bit - set a bit value at a given index to 1
 * @n: input pointer to the number to change
 * @index: input index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure, 0 for NULL
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = ((1UL << index)|*n);
	return (1);
}
