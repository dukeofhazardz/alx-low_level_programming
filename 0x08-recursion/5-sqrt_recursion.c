#include "main.h"

/**
 * square_root - It determines the squar root of
 * @a: a character arguement
 * @b: a character arguement
 * Return: the input value
 */

int square_root(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	if (b * b == 0)
	{
		return (b);
	}
	return (square_root(a, b + 1));
}
/**
 * _sqrt_recursion - A function that returns
 * the natural square root of a number.
 * @n: input size.
 * Description: if n does not have a natural
 * square root, return -1
 * Return: The natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 1));
}
