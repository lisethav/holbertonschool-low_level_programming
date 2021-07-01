#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: pointer to array
 * @n: number of elements of the array
 * Return: integer
 */
void print_array(int *a, int n)
{
	int c = 0;

	if (n > 0)
	{
	while (c != n)
	{
		printf("%d", a[c]);
		if (c < (n - 1))
			printf(", ");
		c++;
	}
	printf("\n");
	}
}
