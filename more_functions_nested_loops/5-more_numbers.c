#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}

		_putchar('\n');
	}
}
