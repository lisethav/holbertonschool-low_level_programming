#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: multiplies o Error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
	printf("Error\n");
	}
	return (1);
}
