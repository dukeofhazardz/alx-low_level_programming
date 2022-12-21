#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	char ch = '#';
	char sp = ' ';
	int a, b, c, d, e;

	d = size - 1;
	e = size - d;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < d; b++)
		{
			_putchar(sp);
		}
		for (c = 0; c < e; c++)
		{
			_putchar(ch);
		}
		d--;
		e++;
		_putchar('\n');
	}
}
