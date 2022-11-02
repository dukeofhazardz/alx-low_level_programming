#include "main.h"
#include "stdio.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s: String to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
