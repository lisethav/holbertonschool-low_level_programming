#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: the end
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		return (-1);
	printf("%s\n", argv[0]);
	return (0);
}

