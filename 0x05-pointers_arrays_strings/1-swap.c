#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: is an arguement
 * @b: is an arguement
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
