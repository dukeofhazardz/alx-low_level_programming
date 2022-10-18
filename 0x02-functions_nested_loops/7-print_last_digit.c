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
	l = l % 10;
	_putchar(l);
	return (l);
}
