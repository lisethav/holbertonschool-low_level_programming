#include<stdio.h>
/**
 * main - Print the abc.. with putchar and exclude
 *
 * Return: This is the end
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
