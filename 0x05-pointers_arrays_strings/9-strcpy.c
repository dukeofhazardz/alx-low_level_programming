#include "main.h"

/**
 * _strcpy - It copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: is an arguement
 * @src: is an arguement
 * Return: (dest).
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + 1) != 0)
	{
		*(dest + 1) = *(src + 1);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}
