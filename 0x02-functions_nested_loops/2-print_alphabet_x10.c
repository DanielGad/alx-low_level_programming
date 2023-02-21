#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int ten;
	char j;

	for (ten = 0; ten <= 9; ten++)
	{
		for (j = 'a'; j = 'z'; j++)
		_putchar (j);
		_putchar('\n');
	}	  	                    
}
