#include "holberton.h"
/**
 * print_alphabet_x10 - Print the abc x 10
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	int cont;

	cont = 0;

	while (cont < 10)
	{
		int abc = 'a';

		while (abc <= 'z')
		{
			_putchar(abc++);
		}
		_putchar('\n');
		cont++;
	}
}
