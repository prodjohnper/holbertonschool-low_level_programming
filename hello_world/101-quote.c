#include <stdio.h>
#include <unistd.h>
/**
 * main - Print the last part of the quote in the standard error.
 * Return: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
