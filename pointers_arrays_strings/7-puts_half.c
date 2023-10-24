#include "main.h"

/**
 * puts_half - Prints half of a
 * string followed by a new line
 */

void puts_half(char *str)
{
	int i, n;

	while (str[i] != '\0')
		i++;

	n = i / 2;

	if (i % 2 == 1)
		n++;

	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
