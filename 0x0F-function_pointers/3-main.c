#include "3-calc.h"

/**
 * main - main fuction
 * @argc: number of arguments
 * @argv: arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	char *operator = argv[2];
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	printf("%d\n", get_op_func(operator)(a, b));
	return(0);
}
