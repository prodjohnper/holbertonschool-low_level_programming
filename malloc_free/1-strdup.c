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
	char *s;
	int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < (i + 1); j++)
	{
		s[j] = str[j];
	}
	return (s);
}
