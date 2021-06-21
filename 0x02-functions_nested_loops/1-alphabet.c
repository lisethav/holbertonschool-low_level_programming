#include "holberton.h"
/**
 * main - Print the abc.. with putchar
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
