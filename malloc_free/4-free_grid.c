#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * free_grid - Function that frees a
 * 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: parameter.
 * @height: parameter.
 */

void free_grid(int **grid, int height)
{
	int i;

	/* Frees array's rows */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Deallocate the memory for the array of pointers */
	free(grid);
}
