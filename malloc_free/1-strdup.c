#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_strdup- Function that returns a pointer to a
newly allocated space in memory
*
*@str: string to duplicate and point with malloc

*Return: a pointer to the duplicated string, NULL
if str is NULL or if insuficient memory was available
*/

char *_strdup(char *str)
{
	unsigned int size = 1 + strlen(str);
	char *ptr = (char *)malloc((size) * sizeof(char));
	unsigned int i;

	if ((ptr == NULL) || (size == 0) || (str[0] == '\0'))
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
