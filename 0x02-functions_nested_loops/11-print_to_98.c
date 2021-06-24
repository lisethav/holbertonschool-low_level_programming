#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints numbers 98
 *
 * @num: first number
 *
 * Return: void
 */

void print_to_98(int num)
{
	while (num != 98)
	{
		printf("%d, ", num);
		if (num > 98)
			num--;
		else
			num++;
	}
	printf("98\n");
}
