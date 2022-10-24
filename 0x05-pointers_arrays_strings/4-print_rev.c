#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: Is an arguement
 */

void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
