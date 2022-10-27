#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function that compares two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 * Return: 0, -15 or 15.
 */

int _strcmp(char *s1, char *s2)
{
	int flag;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			flag = 1;
		}
		if (*s1 > *s2)
		{
			flag = 2;
		}
		s1++;
		s2++;

		if (flag == 0)
		{
			return (0);
		}

		else if (flag == 2)
		{
			return (-15);
		}

		else
		{
			return (15);
		}
	}
}
