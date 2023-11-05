#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function that
 * allocates memory using malloc.
 *
 * @b: parameter.
 *
 * Return: a pointer.
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	/* Allocate memory */
	a = malloc(b * sizeof(char));

	/* Check if allocation was successful */
	if (a == NULL)
	{
		exit(98);
	}

	/* Return pointer */
	return (a);
}
