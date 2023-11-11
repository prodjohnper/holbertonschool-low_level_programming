#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatanates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: parameter.
 *
 * Return: if the function fails return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int s1_len, s2_len, i;
	
	/* Check if string 1 is NULL */
	if (s1 == NULL)
	{
		s1_len = 0;
	}
	else
	{
		s1_len = strlen(s1);
	}
	
	/* Check if string 2 is NULL */
	if (s2 == NULL)
	{
		s2_len = 0;
	}
	else
	{
		s2_len = strlen(s2);
	}

	/* Avoid accessing memory beyond the end of s2 */
	if (n >= s2_len)
	{
		n = s2_len;
	}

	/* Allocate memory */
	a = malloc((s1_len + n + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (a == NULL)
	{
		return (NULL);
	}

	/* Copy characters from s1 to memory in a */
	for (i = 0; i < s1_len; i++)
	{
		a[i] = s1[i];
	}

	/* Copy characters from s2 to memory in a */
	for (i = 0; i < n; i++)
	{
		a[i + s1_len] = s2[i];
	}

	/* Add NULL and return pointer */
	a[i + s1_len] = '\0';
	return (a);
}
