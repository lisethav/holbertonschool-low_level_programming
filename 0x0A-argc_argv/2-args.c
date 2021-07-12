#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: the end
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s%s", argv[i], (i < (argc - 1)));
	printf("\n");
	return (0);
}

