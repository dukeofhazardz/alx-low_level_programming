#include <stdio.h>
/**
 * main - prints the numbers of base 16 in lowercase,
 * Description: 'the program's description'
 * Followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let;
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (let = 'a' ; let <= 'f' ; let++)
	{
		putchar(let);
	}
	putchar('\n');

	return (0);
}

