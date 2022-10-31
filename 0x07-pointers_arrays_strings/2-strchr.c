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
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}
	if (s[i] == c)
	{
		return (s + 1);
	}
	return (s);
}
