#include "holberton.h"
/**
 * _puts - print to cadena
 *
 * @str: pointer
 * Return: a non-negative integer
 */
void _puts(char *str)
{
	int c;
	
	c = 0;
	
	while ((c = *str++) != NULL)
		_putchar(c);
	_putchar('\n');

}
