#include "holberton.h"

/**
 * _abs - the absolute value.
 *
 * @val: variable to convert
 *
 * Return: absolute value
 */

int _abs(int val)
{
	if (val < 0)
	{
		return (val * -1);
	}
	return (val);
}
