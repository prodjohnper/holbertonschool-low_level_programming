#include "main.h"

/**
 * _strncat - concatenates two
 * strings using a number of bytes
 *
 * @dest: variable
 * @src: variable
 * @n: variable
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}
	return (dest);
}
