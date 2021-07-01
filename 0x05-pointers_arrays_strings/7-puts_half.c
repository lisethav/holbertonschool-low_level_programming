#include "holberton.h"
/**
 * puts_half - prints half of a string
 *
 * @str: variable
 * Return: void
 */

void puts_half(char *str)
{
	int c;
	int n;

	n = 0;
	c = 0;
	/**n = (length_of_the_string - 1) / 2 */

	while (str[c] != '\0')
	{
		c++;
	}

	n = c / 2;
	if (c % 2)
	{
		n = n + 1;
	}
	while (n < c)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
