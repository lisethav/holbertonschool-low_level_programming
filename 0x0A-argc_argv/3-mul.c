#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: 0 its ok, 1 its error
 */
int main(int argc, char *argv[])
{
	int mult;
	
	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
	printf("Error\n");
	}
	return (1);
}
