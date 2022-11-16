#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: name of the person
 * f@ A function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL && name == NULL)
		return;

	f(name);
}
