#include "main.h"

/**
 * get_endianness - Entry Point
 * Return: 0 & 1
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *d = (char *) &j;
	return (*d);
}
