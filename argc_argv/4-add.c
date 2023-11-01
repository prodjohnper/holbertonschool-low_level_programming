#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds
 * positive numbers
 *
 * @argc: Arguments count.
 * @argv: Arguments.
 *
 * Return: 0 Success, 1 Error.
 */

int main(int argc, char *argv[])
{
	int num;
	int result = 0;
	int i = 1, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		j = 0;
		
		while (argv[i][j] != '\0')
		{
			if (isdigit(argv[i][j]))
			{
			j++;
			}

			else
			{
				printf("Error\n");
				return (1);
			}
		}
			num = atoi(argv[i]);
			result = result + num;
			i++;
	}

	printf("%d\n", result);
	return (0);
	}
