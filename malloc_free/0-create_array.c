#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Function that creates
 * an array of chars, and initializes it
 * with a specific char.
 *
 * @size: size of memory.
 * @c: char to initialize the array
 *
 * Return: a pointer to the array, or
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	/* Create pointer variable */
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int i;
	
	/* Checks if the size of array is zero */
	/* and checks if memory allocation was successful */
	if ((ptr == NULL) || (size == 0))
	{
		return (NULL);
	}

	/* Iterate and initialize each element of array with char C */
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	/* Return pointer */
	return (ptr);
}
