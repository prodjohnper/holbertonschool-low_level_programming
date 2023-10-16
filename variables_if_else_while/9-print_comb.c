#include <stdio.h>

/**
 * main - Print all posible single-digit
 * number combinations
 *
 * Return: Always 0.
 */

int main(void)
{
	int comb;

	for (comb = 0; comb < 10; comb++)
	{
		putchar(comb + '0');
		if (comb < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
