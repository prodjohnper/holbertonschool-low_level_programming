#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns
 * the sum of all its parameters
 *
 * @n: parameter
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int total = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
		total += va_arg(args, int);

	va_end(args);

	return (total);
}
