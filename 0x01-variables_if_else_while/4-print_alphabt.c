#include<stdio.h>
/**
 * main - Print the abc.. with putchar and exclude
 *
 * Return: This is the end
 */

int main(void)
{
	int abc = 97;

	while (abc <= 122)
	{
		if ((abc != 'e') && (abc != 'q'))
		{
			putchar(abc);
			abc++;
		}
		else
		{
			abc++;
		}
	}
	putchar('\n');
	return (0);
}
