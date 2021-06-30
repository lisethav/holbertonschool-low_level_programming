#include "holberton.h"
/**
 * puts2 - number except impar
 *
 * @str: pointer
 * Return: the end
 */
void puts2(char *str)
{
	int c;

	c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			putchar(str[c]);
		}
		c++;
	}
	putchar('\n');
}
