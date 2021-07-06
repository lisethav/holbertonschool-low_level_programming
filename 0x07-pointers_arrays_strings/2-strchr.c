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
	for ( = 0; s[i] != '\0'; s++)
	{
		if (s[i] == c)
		{
			s = &(s[i]);
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
