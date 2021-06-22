#include "holberton.h"
/**
 * print_alphabet - Print the abc...
 *
 * Return: Void
 */

void print_alphabet(void)
{
	int abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc++);
	}
	_putchar('\n');
}
