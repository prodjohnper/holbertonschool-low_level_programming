#include "variadic_functions.h"

/**
 * print_strings - Function that
 * prints strings, followed by a new line
 *
 * @n: the number of strings passed to the function
 * @separator: string to be printed
 *
 * Return: (nil) if string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;
	char *str_ptr;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str_ptr = va_arg(args, char *);

		if (separator != NULL && i != n - 1)
		{
			if (str_ptr != NULL)
			{
				printf("%s%s", str_ptr, separator);
			}

			else
			{
				printf("(nil)%s", separator);
			}
		}

		else
		{
			if (str_ptr != NULL)
			{
				printf("%s", str_ptr);
			}

			else
			{
				printf("(nil)");
			}
		}

		va_end(args);
	}
	printf("\n");
}
