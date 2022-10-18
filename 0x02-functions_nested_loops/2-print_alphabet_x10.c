#include "main.h"

/**
 * print_alphabet_x10 - prints a-z ten times
 *
 * Return: Always 0.
 *
 */
void print_alphabet_x10(void)
{
	char i = 0;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
