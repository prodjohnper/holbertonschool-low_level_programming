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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	y = n % 10;
	printf("Last digit of %d is %d \n", n, y);

	return (0);
}
