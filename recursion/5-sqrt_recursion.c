#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @r: variable
 * @n: variable
 *
 * Return: natural square root or -1 otherwise.
 */

int square(int r, int n);
int _sqrt_recursion(int n)
{
	return (square(0, n));
}

/**
 * square - function created
 *
 * @r: variable
 * @n: variable
 *
 * Return: natural square root
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
