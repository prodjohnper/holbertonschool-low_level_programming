#include "main.h"

/**
 * flip_bits - Function that returns the
 * number of bits you'll need to flip to
 * get from one number to another.
 *
 * @m: one number.
 * @n: another number.
 *
 * Return: an unsigned int.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m;
	int i = 0;

	while (j > 0)
	{
		i++;
		j &= (j - 1);
	}
	return (i);
}
