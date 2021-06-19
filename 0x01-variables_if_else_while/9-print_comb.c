#include <stdio.h>
/**
  * main - Print combinations of possible
  *
  * Return: This is the end
  */
int main(void)
{
	int comb = '0';

	while (comb <= '9')
	{
		putchar(comb);
		comb++;

		if (comb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
