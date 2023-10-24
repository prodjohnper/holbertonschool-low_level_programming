#include "main.h"

/**
 * puts_half - Prints half of a
 * string followed by a new line
 *
 * @str: variable
 */

void puts_half(char *str)
{
	int i, n, l;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (n = i / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	}
	else
	{
		for (l = (i - 1) / 2; l < i - 1; l++)
		{
			_putchar(str[l + 1]);
		}
	}
	_putchar('\n');
}
