#include <stdlib.h>
#include <string.h>
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
	int s1_len, s2_len, total_len;
	char *result;

	/* Give variables a value */
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	total_len = s1_len + s2_len;

	result = malloc(total_len + 1);

	/* Cases */
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (result == NULL)
	{
		return (NULL);
	}

	/* Concatenate and print strings */
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
