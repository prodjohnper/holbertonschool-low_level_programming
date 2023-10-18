#include "main.h"

/**
 * print_last_digit - Print the last
 * digit of a number
 *
 * @n: variable
 * @y: variable
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int y = n % 10;

	if (y < 0)
	y *= -1; 
	_putchar(y + '0');
	return (y);
}
