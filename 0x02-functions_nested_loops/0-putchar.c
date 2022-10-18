#include <stdio.h>
#define MAXSTRING 80
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0 ; i < MAXSTRING ; i++)
	{
		if (text[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(text[i]);
	}
	return (0);
}
