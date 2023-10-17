#include "main.h"

/**
 * _isalpha - Write a function that
 * checks for alphabetic character
 *
 * @c: variable
 *
 * Return: 1 Succes 0 otherwhise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		
	return (0);
}
