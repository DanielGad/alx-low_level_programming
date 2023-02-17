#include <stdio.h>
/**
 * main - A program that shows the function of printf
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
