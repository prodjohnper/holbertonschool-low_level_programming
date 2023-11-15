#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 *
 * @format: list of types of args
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s, c;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' 
					|| format[i] == 's') && format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
