#include "main.h"

/**
 * _puts_recursion - Prints a
 * string, followed by a new line.
 *
 * @s: variable
 */

void _puts_recursion(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
