#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of square
 */

void print_square(int size)
{
	char ch = '#';
	int a, b;

	for (a = 0; a < size; a++)
	{
		_putchar(ch);
		for (b = 0; b < size; b++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
