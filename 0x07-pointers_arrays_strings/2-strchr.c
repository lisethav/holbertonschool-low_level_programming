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
	for (; s != '\0'; s++)
	{
		if (s == c)
		{
			return (char *)s;
		}
	}
	return (NULL);
}
/*
 * Option two or code
 * { for (;*s != '\0'; ++s)
 * if (*s == c)
 * return (char *)s;
 *
 * return NULL;
 * }
 */
