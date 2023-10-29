#include "main.h"

/**
 * _sqrt_recursion - returns the
 * natural square root of a number
 *
 * @n: variable
 * @r: variable
 *
 * Return: natural square root of a
 * number or -1 otherwise.
 */

int square(int r, int n);

int _sqrt_recursion(int n)
{
	return (square(0, n));
}

/**
 * square - returns the square
 * root of a number
 */

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
