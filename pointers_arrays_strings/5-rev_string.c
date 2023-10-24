#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: variable
 */

void rev_string(char *s)
{
	int i = 0, l = 0;
	char tmp;

	while (s[i++])
	{
		l++;
	}

	for (i = l - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}	
}
