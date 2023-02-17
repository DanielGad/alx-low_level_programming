#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char n = 'a';

	char m = 'A';

	while (n <= 'z' | m <= 'Z')
	{
		printf("%c\n", n, m);
		n++;
		m++;
	}
	return (0);
}
