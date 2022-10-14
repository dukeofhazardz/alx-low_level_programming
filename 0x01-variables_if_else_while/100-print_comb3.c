#include <stdio.h>
/**
 * main - prints all possible combinations of two-digit numbers,
 * Description: 'the program's description'
 * Followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
	for (b = 48 ; b < 58 ; b++)
	{
		putchar(a);
		putchar(b);
		if
		(a != 57 || b != 57) {
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}

