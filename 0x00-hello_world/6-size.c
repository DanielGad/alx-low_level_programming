#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is where the function program runs.
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
