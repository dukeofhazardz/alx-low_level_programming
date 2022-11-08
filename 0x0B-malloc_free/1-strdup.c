#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	dup = malloc((i + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}

	return (dup);
}

