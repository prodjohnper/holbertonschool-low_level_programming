#include <stdio.h>

/**
 * main - Program that prints
 * it name, followed by a new
 * line
 *
 * @argc: Argument count.
 * argv: Arguments.
 *
 * Return: 0 Success.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
