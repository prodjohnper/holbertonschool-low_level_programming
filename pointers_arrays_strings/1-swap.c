#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: variable
 * @b: variable
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
