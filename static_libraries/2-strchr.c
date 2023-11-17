#include "main.h"

/**
 * _strchr - Function that locates
 * a character in a string
 *
 * @s: variable
 * @c: variable
 *
 * Return: a pointer to the first
 * ocurrence of the character c in
 * the string s, or NULL if the
 * character is not found
 */

char *_strchr(char *s, char c)
{
	char *myNull = '\0';

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (myNull);
}
