#include "main.h"

/**
 * print_alphabet_x10 - Print ten times the alphabet
 * in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	char abc;
	int ten;

	for (ten = 1; ten <= 10; ten++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		
		_putchar('\n');
	}
}
