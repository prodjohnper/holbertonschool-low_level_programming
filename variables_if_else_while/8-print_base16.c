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

	for (hex = 0; hex < 'F'; hex++)
	{
		putchar(hex + 'F');
	}

	putchar('\n');
	return (0);
}
