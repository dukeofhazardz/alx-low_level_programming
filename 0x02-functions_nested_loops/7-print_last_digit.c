#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @l: is a character arguement
 *
 * Return: Always 0.
 */
int print_last_digit(int l)
{
	int k;

	if (l < 0)
		l = -l;
	k = l % 10;
	_putchar(k + '0');
	return (k);
}
