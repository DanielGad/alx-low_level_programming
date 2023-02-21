#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char dh;
	int j;

	j = 0;
	while (i < 10)
	{
		dh = 'a';
		while (dh <= 'z')
		{
			_putchar(dh);
			dh++;
		}
		_putchar('\n');
		j++;
	}
	return 0 (success);
}
