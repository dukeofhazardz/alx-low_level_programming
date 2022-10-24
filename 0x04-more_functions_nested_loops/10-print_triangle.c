#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	char ch = '#';
	int a, b, c;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= (size - a); b++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= a; c++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}