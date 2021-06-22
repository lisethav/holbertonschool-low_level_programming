#include "holberton.h"

/**
 * _islower -  Return to 0 o return 1
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{return (1);
	}
	return (0);
}
