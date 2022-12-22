#include "main.h"
#include <stdio.h>

/**
 * print_number - A function that prints an integer.
 * @n: Integer to be printed
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n = -n;
		k = n;
		_putchar('-');
	}
	k /= 10;

	if (k != 0)
	{
		print_number(k);
	}
	_putchar((n % 10) + '0');
}
