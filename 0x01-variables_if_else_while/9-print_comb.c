#include <stdio.h>
/**
  * main - Print combinations of possible
  *
  * Return: This is the end
  */
int main(void)
{
	int comb = 9;

	while (comb != 0)
	{
		putchar(comb);

		if (comb != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
