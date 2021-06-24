#include "holberton.h"
/**
 * times_table - prints times table 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, last, first, linend;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			linend = a * b; 

			last = (linend % 10);
			first = (linend / 10);

			if (first == 0 && b > 0)
			{
				_putchar(' ');
			}
			else if (b > 0)
			{
				_putchar(first + '0');
			}
			_putchar(last + '0');
			if (b == 9)
			{
				break;
			}

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
