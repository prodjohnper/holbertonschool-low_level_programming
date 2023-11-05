#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _strdup- Function that returns a pointer to a
* newly allocated space in memory
*
* @str: string to duplicate and point with malloc
*
* Return: a pointer to the duplicated string, NULL
* if str is NULL or if insuficient memory was available
*/

char *_strdup(char *str)
{
	/* Create values and assign them a value */
	char *s;
	int i, j;

	i = 0;
	j = 0;

	/* Check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Count the number of characters in input string */
	while (str[i] != '\0')
	{
		i++;
	}

	/* Allocate memory */
	s = malloc((i + 1) * sizeof(char));

	/* Check if allocation was successful */
	if (s == NULL)
	{
		return (NULL);
	}

	/* Copy characters from original string to newly allocated one */
	for (j = 0; j < (i + 1); j++)
	{
		s[j] = str[j];
	}

	/* Return a pointer */
	return (s);
}
