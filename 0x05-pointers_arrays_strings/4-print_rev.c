#include "holberton.h"
/**
 * print_rev - print to reverse the text
 *
 * @s: pointer
 * Return: the end.
 */
void print_rev(char *s)
{
	int j;
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	for (j = (i = i - 1); j >= 0; j--)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
