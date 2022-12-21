#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long a = 612852475143;
	unsigned int prime = 2;

	/*Iterating through the digits*/
	while (a != 1)
	{
		while ((a % prime) == 0)
		{
			a = a / prime;
		}
		prime++;
	}
	/* Prining last or largest prime factor of the
	 * number 612852475143, followed by a new line.*/
	printf("%u\n", prime);
	return (0);
}
