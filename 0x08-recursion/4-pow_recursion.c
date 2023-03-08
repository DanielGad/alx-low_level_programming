#include <stdio.h>
/**
 * _pow_recursion - Entry point
 * @x: input
 * @y: input
 *
 * Description: print the value of x raised to the power of y.
 *
 * Return: 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
