#include "holberton.h"
/**
 * _strlen - counts the number of characters.
 *
 * @*s: pointer
 * Return: the counter
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
