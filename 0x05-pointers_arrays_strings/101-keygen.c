#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_LEN 6
#define MAX_LEN 10
/**
 * main - Entry point
 * generate_password: input
 * Return: 0 (success)
 */
int main(void)
{
	char *generate_password()
	{
	static char password[MAX_LEN + 1]; /* static array to store the generated password*/
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; /* valid characters for password*/
	const size_t charset_size = sizeof(charset) - 1; /* size of valid characters array*/
	int password_length = rand() % (MAX_LEN - MIN_LEN + 1) + MIN_LEN; /* generate password length between MIN_LEN and MAX_LEN*/
	int i;

		for (i = 0; i < password_length; i++)
	{
	password[i] = charset[rand() % charset_size]; /* select random characters from the charset*/
	}
	password[password_length] = '\0'; /* terminate password with null character*/
		return (password);
	}
}

	int main(void)
{
	srand(time(NULL)); /* seed random number generator with current time*/
		for (int i = 0; i < 10; i++)
		{
			printf("%s\n", generate_password()); /* generate 10 random passwords and print them*/
	}
		return (0);
}
