#include "holberton.h"
/**
 * more_numbers - print 10 column to numbers 0...14
 * Return: the end
 */
void more_numbers(void)
{
	int file, colum;

	colum = file = 0;
	for (file = 0; file < 10; file++)
	{
		for (colum = 0; colum <= 14; colum++)
		{
			if (colum >= 10)
			{_putchar(colum / 10 + '0');
			}
			_putchar(colum % 10 + '0');
		}
		_putchar('\n');
	}
}
