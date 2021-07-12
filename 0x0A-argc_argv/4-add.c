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
	int i; 
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i])) /* non numeric */
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
