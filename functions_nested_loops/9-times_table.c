#include "main.h"

/**
 * times_table - Print the 9 times
 * table, starting with 0
 *
 * @i: variable
 *
 * Return: void
 */

void times_table(void)
{
	int i, ii, iii;

	for (i = 0; i <= 9; ++i)
	{
		_putchar('0' + i);

		for (ii = 0; ii <= 9; ++ii)
		{ 
			_putchar(',');
			_putchar(' ');

			iii = i * ii;

			if (iii <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((iii / 10) + '0');
			_putchar((iii % 10) + '0');
		}
		_putchar('\n');
	}
}
