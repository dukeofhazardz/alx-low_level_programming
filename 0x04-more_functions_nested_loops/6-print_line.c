#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is a character arguement
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;
	char ch = '_';

	for (i = 0; i < n; i++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
