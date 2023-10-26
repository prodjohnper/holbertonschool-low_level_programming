#include "main.h"

/**
 * _strpbrk - Function that searches
 * a string for any of a set of bytes
 *
 * @s: variable
 * @accept: variable
 *
 * Return: a string or nul depending if
 * *_strpbrk is true
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0, i = 0, h = 0;
	char *NUL = '\0';

	while (accept[i] != '\0')
	{
		i++;
	}
	while (s[h] != '\0')
	{
		while(j <= i)
		{
			if (accept[j] == s[h])
			{
			return (s + h);
			}
			j++;
		}
		j = 0;
		h++;
	}
	return (NUL);
}
