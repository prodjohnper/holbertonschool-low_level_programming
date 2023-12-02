#include "main.h"

/**
 * binary_to_unit - Function that converts
 * a binary number to an unsigned int.
 *
 * @b: binary number.
 *
 * Return: number after conversion.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int value = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			value <<= 1;
			value += b[i] - '0';
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (value);
}
