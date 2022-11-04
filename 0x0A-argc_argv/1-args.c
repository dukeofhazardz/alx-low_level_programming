#include "main.h"
#include <stdio.h>

/**
 * main - The main function.
 * @argc: The arguement counter
 * @argv: The arguement vector
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (i >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
