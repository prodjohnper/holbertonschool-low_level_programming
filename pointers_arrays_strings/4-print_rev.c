#include "main.h"

/**
 * print_rev - Prints a string,
 * in reverse, followed by a new line.
 *
 * @s: variable
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	for (index = index - 1; s[index] != '\0'; index--)
		{
			_putchar(s[index]);
		}

		_putchar('\n');
}
