#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Entry point
 * @name: input pointer to name
 * @f: input pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
