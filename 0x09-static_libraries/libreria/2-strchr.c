#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character to locate
 * Return: NULL o *s
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (NULL);
		}
	}
	return ((char *)s);
}
