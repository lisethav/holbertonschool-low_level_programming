#include "holberton.h"

/**
 * print_triangle - number of times
 *
 * @size: number of times it is repeated
 * Return: the end.
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a < size; a++)
	{
		for (b = 1; b < size; b++)
		{
			if (b <= (size - a))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
	_putchar('\n');
	}
}
