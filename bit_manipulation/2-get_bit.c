#include "main.h"

/**
 * get_bit - Function that
 * returns the value of a bit.
 *
 * @n: number.
 * @index: position of number.
 *
 * Return: the value of the bit at index, -1 if Error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = ((n >> index) & 1);
		return (i);
}
