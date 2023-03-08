#include <stdio.h>

/**
 * is_prime_number - Entry point
 * @n: input
 *
 * Description: print 1 if the input integer is a prime number, otherwise return 0
 *
 * Return: 0 (success)\
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2);
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		int i;

		for (i = 3; i <= sqrt(n); i += 2)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}
