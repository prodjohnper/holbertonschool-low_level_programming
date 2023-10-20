#include "stdio.h"

/**
 * main - print numbers from
 * 1 to 100 followed by a new line but
 * for multiples of 3 print Fizz and for
 * multiples of 5 print Buzz. For multiples
 * of both print FizzBuzz
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 15) == 0)
			printf("FizzBuzz");

		else if ((a % 3) == 0)
			printf("Fizz");

		else if ((a % 5) == 0)
			printf("Buzz");

		else
			printf("%d", a);

		if (a == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
