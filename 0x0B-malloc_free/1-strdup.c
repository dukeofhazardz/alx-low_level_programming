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
	int i, len;
	char *dup;
	char *dupl;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	dupl = dup;
	while (*str)
	{
		*dupl = *str;
		dupl++;
		str++;
	}
	*dupl = '\0';

	free(dup);

	return (dup);
}

