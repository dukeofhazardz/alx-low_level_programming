#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * Description: 'the program's description'
 * Followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}

