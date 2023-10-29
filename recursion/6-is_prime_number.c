#include "main.h"

/**
 * is_prime_number - returns if the input integer is a prime number
 * prime - funtion created
 *
 * @i: number
 * @n: variable
 *
 * Return: prime number
 */

int prime(int i, int n);
int is_prime_number(int n)
{
	return (prime(2, n));
}

/**
 * prime - function created
 *
 * @i: variable
 * @n: variable
 *
 * Return: prime number
 */

int prime(int i, int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i % n == 0)
	{
		return (1);
	}
	else
	{
		return (prime(i, n - 1));
	}
}
