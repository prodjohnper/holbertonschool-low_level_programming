#include "main.h"

/**
 * _strspn - Function thet gets
 * the lenght of a prefix substring
 *
 * @s: variable
 * @accept: variable
 * Return: The initial number of bytes
 * in the initial segment of s, which
 * consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found;

	for (i = 0; s[i]; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		count++;
	}
	return (count);
}
