#include <stdio.h>
/**
 * factorial - Entry point
 * @n: input
 *
 * Description: print the factorial of a given number
 *
 * Return: (0) success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
