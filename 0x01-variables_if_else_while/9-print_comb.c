#include <stdio.h>
/**
  * main - Print combinations of possible
  *
  * Return: This is the end
  */
int main(void)
{
	int comb = 48;

	while (comb <= 57)
	{
		putchar(comb);

		if (comb != 57)
		{
			putchar(',');
			putchar(' ');
		}
		comb++;
	}
	putchar('\n');
	return (0);
}
