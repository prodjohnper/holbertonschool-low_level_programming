#include "3-calc.h"

/**
 * op_add - Sum of two numbers
 *
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of two numbers
 *
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of two numbers
 *
 * @a: First number
 * @b: Second number
 *
 * Return: Product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of two numbers
 *
 * @a: First number
 * @b: Second number
 *
 * Return: Result of a division of a and b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Remainder of the division of two numbers
 *
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of division of a by b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
