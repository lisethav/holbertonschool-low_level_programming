#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: the end
 */
int main(int argc, char *argv[] char *envp[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", i, argv[i]);
	while (*envp)
		printf("%s\n", *envp++);
	return (0);
}

