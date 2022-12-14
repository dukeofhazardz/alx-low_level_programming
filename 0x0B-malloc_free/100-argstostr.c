#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the
 * arguments of your program.
 * @ac: length of string
 * @av: string arguement
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
	}

	ptr = malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k++] = '\n';
	}
	ptr[size] = '\0';

	return (ptr);
}
