#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign a random number and show the last digit.
 *
 * Return: The end is 0
 */
int main(void)
{
	int n, tlast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	tlast = n % 10;
	if (tlast > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, tlast);
	}
	else if (tlast == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, tlast);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tlast);
	}
	return (0);
}
