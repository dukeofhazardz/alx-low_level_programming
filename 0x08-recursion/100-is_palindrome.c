#include "main.h"

/**
 * str_len - getting string len
 * @s: string value
 * Return: string length
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * check_palindrome - Checks for palindrome
 * @s: input character
 * @i: an iterator
 * @len: string length indicator
 * Return: State of string.
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - A function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s: input string
 * Return: State of input string
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = str_len(s);

	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
