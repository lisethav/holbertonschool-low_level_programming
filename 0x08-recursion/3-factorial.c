#include "holberton.h"

/**
 * factorial - function returns the factorial of a given number
 *
 * @n: integer
 *
 * Return: or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
