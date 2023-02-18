#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		printf("%c", n);
		n++;
	}
	n = 'A';
	while (n <= 'Z')
	{
		printf("%c", n);
		n++;
	}
	return (0);
}
