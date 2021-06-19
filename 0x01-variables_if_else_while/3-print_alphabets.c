#include<stdio.h>
/**
 * main - Print the abc.. with putchar
 *
 * Return: This is the end
 */

int main(void)
{
	int abc = 97;
	int ABC = 65;

	while (abc <= 122)
	{
		putchar(abc);
		abc++;
	}
	while (ABC <= 90)
	{
		putchar(ABC);
		ABC++;
	}
	putchar('\n');
	return (0);
}
