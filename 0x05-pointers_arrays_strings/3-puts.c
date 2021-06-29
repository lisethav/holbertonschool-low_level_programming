#include "holberton.h"
/**
 * _puts - print to cadena
 *
 * @str: pointer
 * Return: a non-negative integer or EOF.
 */
void _puts(char *str)
{
	int c;

	c = 0;

	while (c = *str++)
	{
		_putchar(c);
	}
}
