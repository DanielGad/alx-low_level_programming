#include "main.h"
#include <stdio.h>

/**
 * _atoi - Entry point
 * @s: input
 * Return: 0 (success)
 */
int _atoi(char *s)
{
	int num = 0, sign = 1, i = 0;

	if (s[0] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			i++;
		}
		else
	{
			break;
		}
	}
	return (num * sign);
}
