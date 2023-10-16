#include <stdio.h>

/**
 * main - Print the alphabet in lower case
 * and upper case
 *
 * Return: Always 0.
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar('\n');
	}
	for (Alphabet = 'A'; Alphabet <= 'Z'; Alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
