#include "main.h"

/**
 * _sqrt_recursion - returns the
 * natural square root of a number
 *
 * @n: variable
 *
 * Return: natural square root of a
 * number or -1 otherwise.
 */

int square(int r, int n);

int _sqrt_recursion(int n)
{
	return (square(0, n));
}

int square(int r, int n)
{
	int sr = r * r;

	if (sr < n)
	{
		return (square(r + 1, n));
	}
	else if (sr > n)
	{
		return (-1);
	}
	return (r);
}
