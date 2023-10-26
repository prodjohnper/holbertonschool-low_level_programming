#include "main.h"

/**
 * _memset - Function that fills the
 * memory with a constant byte.
 *
 * @s: variable
 * @b: variable
 * @n: variable
 *
 * Return: S.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
