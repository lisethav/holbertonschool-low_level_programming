#include "holberton.h"

/**
 * print_square - number of times
 *
 * @size: number of times it is repeated
 * Return: the end.
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
