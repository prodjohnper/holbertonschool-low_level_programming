#include <stdio.h>

/**
 * main - Print the lowercase alphabet
 * in reverse
 *
 * Return: Always 0.
 */

int main(void)
{
	char rev;

	rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}

	putchar('\n');
	return (0);
}
