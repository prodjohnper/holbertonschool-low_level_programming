#include "main.h"

/**
 * _strstr - Function that
 * locates a substring
 *
 * @haystack: variable
 * @needle: variable
 * 
 * Return: return a pointer to the
 * beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0, i = 0, h = 0, cutindex;
	char *myNull = '\0';

	while (needle[i] != '\0')
	{
		i++;
	}
	while (haystack[h] != '\0')
	{
		while (j <= i)
		{
		if (needle[j] == haystack[h])
		{
			cutindex = h;
			while (needle[j] == haystack[h])
			{
				j++;
				h++;
				if (j == i && needle[j] == haystack[h])
				{
					return (haystack + cutindex);
				}
				else if (j == i)
				{
					return (myNull);
				}
			}
		}
		else
		{
			j = 0;
			h++;
		}
		j = 0;
		}
	}
	return (myNull);
}
