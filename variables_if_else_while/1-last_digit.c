#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print the last digit of the
* number stored in the variable n
*
* Return: Always 0.
*/

int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	y = n % 10;
	printf("Last digit of %d is %d", n, y);

	{

	if (y > 0)
	{
		printf(" and is greater than 5\n");
	}
	else if (y < 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else
	{
		printf(" and is 0\n");
	}
	return (0);
	}
}
