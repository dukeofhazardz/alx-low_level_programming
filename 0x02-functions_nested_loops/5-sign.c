#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: is a character arguement
 *
 * Return: -1, 0 or 1 depending on condition.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1111);
	}
}
