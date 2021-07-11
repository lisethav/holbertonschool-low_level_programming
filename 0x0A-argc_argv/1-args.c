#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: the end
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", argc - 1);
	return (0);
}
