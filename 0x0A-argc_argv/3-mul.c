#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: input
 * @argv: input
 *
 * Return: 0 if true, else 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%dn", a, *b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
