#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: variable
 *
 * Return: 1 Succesful, -1 negative 0 otherwhise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
