#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if Succesful 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
