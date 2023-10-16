#include <stdio.h>

/**
 * main - Print all single digits numbers of
 * base 10 starting from 0
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
		if (x < 9)
		{
			printf(", ");
		}
	}

	printf('\n');
	return (0);
}
