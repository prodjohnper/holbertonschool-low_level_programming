#include "main.h"

/**
 * print_diagonal - Prints a
 * diagonal line
 *
 * @n: variable
 */

void print_diagonal(int n)
{
	int d, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (d = 0; d < n; d++)
	{
		for (spc = 0; spc < d; spc++)
			if (spc < d)
		{
			_putchar(32);
		}	
		{
			_putchar(92);
		}
	{
	_putchar('\n');
	}
	}
}
