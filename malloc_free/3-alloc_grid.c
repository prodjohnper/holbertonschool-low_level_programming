#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Function that returns
 * a pointer to a 2 dimensional array
 * of integers.
 *
 * @width: the width of the grid.
 * @height: the height of the grid.
 *
 * Return: a pointer.
 */

int **alloc_grid(int width, int height)
{
	/* Create variables */
	int x, y;
	int **a;

	/* Statement to return NULL if unable to create grid */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory into array */
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	/* Create two dimensional array */
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);

		if (a[x] == NULL)
		{
			/* Return NULL if the memory allocation failed
			 * and frees previously allocated memory */
			for (x = 0; x >= 0; x--)
			{
				free(a[x]);
			}

			free(a);
			return (NULL);
		}
	}
	/* Return a pointer to the array */
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			a[x][y] = 0;
		}
	}

	return (a);
}
