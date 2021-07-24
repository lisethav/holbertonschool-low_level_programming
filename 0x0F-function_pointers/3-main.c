#include "3-calc.h"

/**
 * main - main fuction
 * @argc: number of arguments
 * @argv: arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	char *operator;
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(operator)(a, b));
	return (0);
}
