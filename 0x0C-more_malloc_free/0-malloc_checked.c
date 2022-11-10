#include "main.h"
#include <stdlib.h>

/**
 *  malloc_checked - A function that allocates memory using malloc.
 *  @b: interger to be checked
 *  Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
