#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: is the string array
 * @c: is the character
 * Return: s.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	while (s[i] == c)
	{
		i++;
	}
	return (s);
}
