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
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (0 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, y);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 adn not 0\n", n, y);
	}
	return (0);
}
