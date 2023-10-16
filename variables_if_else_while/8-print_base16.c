#include <stdio.h>

/**
 * main - Print all numbers of base 16
 * in lowercase, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	int hex;

	for (hex = 0; hex <= 15; hex++)
	{
		putchar(hex + '0');
	}

	putchar('\n');
	return (0);
}
