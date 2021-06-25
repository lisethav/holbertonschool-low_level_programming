#include "holberton.h"

/**
 * print_numbers - print numbers to 0...9
 *
 * Return: the end
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}

	_putchar('\n');
}
