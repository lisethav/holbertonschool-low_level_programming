#include "holberton.h"
/**
 * print_line - print to line
 *
 * @n: variable
 * Return: the end
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar(95);
	_putchar('\n');
}
