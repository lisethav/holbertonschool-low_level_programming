#include "holberton.h"

/**
 * _isdigit - digit or not digit
 *
 * @c: variable
 * Return: the end
 */
int _isdigit(int c)
{
	if (c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
