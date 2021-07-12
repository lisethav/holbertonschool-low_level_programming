#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: 0 its ok, 1 its error
 */
int main(int argc, char *argv[])
{
	if (argc == 3 && argv[1] >= 0 && argv[2] >= 0)
	{
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
		return (0);
	}
	else
	{
	printf("Error\n");
	}
	return (1);
}
