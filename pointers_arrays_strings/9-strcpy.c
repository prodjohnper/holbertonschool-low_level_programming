#include "main.h"

/**
 * *_strcpy - Copies the string
 *
 * @src: source variable
 * @dest: destination variable
 *
 * Return: 1 Success 0 otherwise.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
