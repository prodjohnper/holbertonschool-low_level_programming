#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function that allocates memory for a array.
 *
 * @nmemb: elements of size.
 * @size: parameter.
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *n;
	char *a;

	/* Check and return NULL if nothing to allocate */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Allocate memory and initialize each element to char 0 */
	if (size == sizeof(char))
	{
		a = malloc(nmemb * size);

		if (a == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
		{
			a[i] = '0';
		}
		return (a);
	}
		else
		{

		/* Allocate memory and initialize each element to int  */
		n = malloc(nmemb * size);

		if (n == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
		{
			n[i] = 0;
		}
	}
	return (n);
}
