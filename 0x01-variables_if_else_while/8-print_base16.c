#include<stdio.h>
/**
 * main - Print the abc.. with putchar
 *
 * Return: This is the end
 */

int main(void)
{
	int b16 = 48;
	int b162 = 97;

	while (b16 <= 57)
	{
		putchar(b16);
		b16++;
}
	while (b162 <= 102)
	{
		putchar(b162);
		b162++;
	}
	putchar('\n');
	return (0);
}
