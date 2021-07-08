#include "holberton.h"

/**
 * _strlen_recursion - fuction returns the length of a string
 *
 * @s: string
 * Return: string size
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}

	len = (_strlen_recursion(s + 1));
	return (len + 1);
}
