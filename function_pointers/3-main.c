#include "3-calc.h"

/**
 * main - Function that prints
 * the result ofsimple operations
 *
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: 0 if success
*/

int main(int argc, char *argv[])
{
	int num_1 = 0, num_2 = 0;
	int result = 0;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	operator = argv[2];
	num_2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = (*get_op_func(operator))(num_1, num_2);

	printf("%d\n", result);
	return (0);
}
