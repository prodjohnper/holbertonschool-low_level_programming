#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: String 1
 * @s2: string 2
 *
 * Return: 0 if the strings result equal,
 * positive or negative integer depending
 * on the comparison result.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
