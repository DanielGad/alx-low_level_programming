#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: count arguement
 * @argv: Arguements
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void) argv;\
	printf("%i\n", argc - 1);

	return (0);
}
