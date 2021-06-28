#include <stdio.h>
#include "holberton.h"
/**
 * void swap_int - print to 98
 *
 * @n: variable
 * Return: the end.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
