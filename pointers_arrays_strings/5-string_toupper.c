#include "main.h"

/**
 * string_toupper - Convert
 * lowercase characters to
 * uppercase in a string
 *
 * @str: variable
 *
 * Return: A pointer to the
 * modified string
 */

char *string_toupper(char *str)
{
	char *copy = str;

	while (*copy != '\0')
	{
		if (*copy >= 'a' && *copy <= 'z')
		{
			*copy = *copy - ('a' - 'A');
		}
		copy++;
	}
	return (str);
}
