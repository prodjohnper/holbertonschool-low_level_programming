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
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if ((ptr == NULL) || (size == 0))
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
