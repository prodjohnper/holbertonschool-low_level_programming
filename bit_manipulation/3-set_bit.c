#include "main.h"

/**
 * set_bit - Function that sets the
 * value of a bit to 1 at a given index.
 *
 * @n: number.
 * @index: position of number.
 *
 * Return: 1 if it worked, or -1 if Error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	(*n |= (1 << index));
	return (1);
}
