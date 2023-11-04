#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - Function that
 * concatenates two strings.
 *
 * @s1: first string.
 * @s2: string to concatenate.
 *
 * Return: NULL if empty string
 * is passed or in case of failure.
 */

char *str_concat(char *s1, char *s2)
{
	/* Create variables */

	int s1_len, s2_len, size, i = 0;
	char *concat;

	/* Give variables a value */

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	size = s1_len + s2_len;

	concat = malloc((size + 1) * sizeof(char));

	/* If statements */

	if (concat == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		s1_len = 0;
	}

	if (s2 == NULL)
	{
		s2_len = 0;
	}

	/* Print concatenated strings */

	while (*s1 != '\0')
	{
		concat[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		concat[i] = *s2;
		s2++;
		i++;
	}
	
	concat[i] = '\0';
	return (concat);
}
