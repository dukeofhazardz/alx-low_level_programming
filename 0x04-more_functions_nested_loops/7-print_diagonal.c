#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is a character arguement
 * Return: void
 */

void print_diagonal(int n)
{
	int i, m;

	char ch = '\\';

	for (i = 0; i < n; i++)
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
