#include "main.h"

/**
 * clear_bit - set the bit value of a given bit to 0
 * @n: input pointer to the number to change
 * @index: input index of the bit to clear
 *
 * Return: 1 for success, -1 for failure, 0 for NULL
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
