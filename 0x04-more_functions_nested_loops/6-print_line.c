#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is a character arguement
 * Return: Always 0.
 */

void print_line(int n)
{
	int i, m;

	char ch = '_';

	for (i = 0;  i > n; i++)
	{
		_putchar(ch);
		_putchar('\n');
		for (m = -1; m < i; m++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
