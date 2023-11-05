#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers.
 *
 * @min: parameter.
 * @max: parameter.
 *
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *a, i, j;

	/* Return NULL if min greater than max(error) */
	if (min > max)
	{
		return (NULL);
	}
	if (min == max)
	{
		j = 1;
	}
	else
	{
		j = max - min;
	}
	if (min == 0)
	{
		j++;
	}

	/* Allocate memory */
	a = malloc(sizeof(int) * j);
	if (a == NULL)
	{
		return (NULL);
	}

	/* Populate allocated memory with integers in specified range */
	for (i = 0; i < j; i++)
	{
		a[i] = min + i;
	}
	return (a);
}
