#include<stdio.h>
/**
 * main - Print the abc.. with putchar
 *
 * Return: This is the end
 */

int main(void)
{
	int abc = 122;

	while (abc <= 97)
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
