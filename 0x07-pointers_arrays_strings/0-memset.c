/**
 * _memset - Entry point
 * @b: input
 * @n: input
 * @s: input
 * Return: 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
