#include "main.h"

/**
 * reset_to_98 - it takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 *
 * @n: is an arguement
 */

void reset_to_98(int *n)
{
	int *p;

	*p = &n;
	*p = 98;
}
