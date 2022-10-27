#include "main.h"

/**
 * reverse_array - A function that reverses
 * the content of an array of integers.
 *
 * @a: An array of numbers.
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		a[i] = temp;
		a[i] = a[j];
		a[j--] = temp;
	}
}
