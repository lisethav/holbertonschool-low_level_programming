#include "holberton.h"

/**
 * _isalpha -  Return to 0 o return 1
 *
 *@c: is variable
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{return (1);
	}
	return (0);
}
