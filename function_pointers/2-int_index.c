#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 *
 * @array: received array
 * @size: array size
 * @cmp: pointer to the function to compare values
 *
 * Return:index of first element or -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
