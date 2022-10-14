#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * Description: 'the program's description'
 * Followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let;

	for (let = 'z' ; let <= 'a' ; let--)
	{
		putchar(let);
	}
	putchar('\n');

	return (0);
}

