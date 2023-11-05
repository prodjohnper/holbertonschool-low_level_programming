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
	/* Create variables */
	char *a;
	unsigned int s1_len, s2_len, i;

	if (s1 == NULL) /* Check if string 1 is NULL */
	{
		s1_len = 0;
	}
	else
	{
		s1_len = strlen(s1);
	}
	if (s2 == NULL) /* Check if string 2 is NULL */
	{
		s2_len = 0;
	}
	else
	{
		s2_len = strlen(s2);
	}
	if (n >= s2_len) /* Avoid accessing memory beyond the end of s2 */
	{
		n = s2_len;
	}
	a = malloc((s1_len + n + 1) * sizeof(char)); /* Allocate memory */

	if (a == NULL) /* Check if memory allocation was successful */
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++) /* Copy characters from s1 to memory in a */
	{
		a[i] = s1[i];
	}
	for (i = 0; i < n; i++) /* Copy characters from s2 to memory in a */
	{
		a[i + s1_len] = s2[i];
	}
	a[i + s1_len] = '\0'; /* Add NULL and return pointer */
	return (a);
}
