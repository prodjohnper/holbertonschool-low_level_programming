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
	char Alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	for (Alphabet = 'A'; Alphabet <= 'Z'; Alphabet++)
	{
		putchar(alphabet);
		putchar(Alphabet);
	}

	putchar('\n');
	return (0);
}
