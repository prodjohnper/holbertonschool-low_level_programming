#include "main.h"

/**
 * clear_bit - Function that sets the
 *
 * @n: number.
 * @index: position of number.
 *
 * Return: 1 Success, -1 if Error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
		return (1);
}
