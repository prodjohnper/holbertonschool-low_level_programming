#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function
 * given as a parameter on each element of an array
 *
 * @array: given array
 * @size: array size
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == 0 || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
