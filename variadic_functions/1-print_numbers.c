#include "variadic_functions.h"

/**
 * print_numbers - Function that prints
 * numbers followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of ints passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nums = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i ++)
	{
		nums = va_arg(args, n);
		printf("%d", nums);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
