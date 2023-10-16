#include <stdio.h>

/**
 * main - Print all numbers of base 16
 * in lowercase, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	int hex, abc;

	for (hex = 0; hex <= 10; hex++)
	{
		putchar(hex + '0');
	}

	for (abc = 'a'; abc <= 'f'; abc++)
	{
		putchar(abc);
	}

	putchar('\n');
	return (0);
}
