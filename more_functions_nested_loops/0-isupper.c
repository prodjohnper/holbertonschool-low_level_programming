#include "main.h"

/**
 * _isupper - Checks for uppercase
 * character
 *
 * @c: variable
 *
 * Return: 1 Success 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
