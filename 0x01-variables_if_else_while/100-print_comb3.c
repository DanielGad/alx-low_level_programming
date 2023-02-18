#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	while (a = 0; a <= '99')
	{
		if ((a != '01' && a != '10') && a <= '99')
		putchar(a);
		a++;
		putchar(", ");
	}
	return (0);
}
