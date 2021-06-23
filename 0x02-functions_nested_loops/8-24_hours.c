#include "holberton.h"
/**
 * jack_bauer - hours and minutes
 *
 * Return: The end
 */
void jack_bauer(void)
{
	int hour, minu;

	for (hour = 0; hour < 24; hour++)
	{
		for (minu = 0; minu < 60; minu++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minu / 10) + 48);
			_putchar((minu % 10) + 48);
			_putchar('\n');
		}
	}
}
