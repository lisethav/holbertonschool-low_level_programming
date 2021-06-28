#include "holberton.h"
/**
 * swap_int - print to 98
 *
 * @a: variable 1
 * @b: variable 2
 * Return: the end.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
