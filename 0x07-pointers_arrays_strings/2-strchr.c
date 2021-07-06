#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character to locate
 * Return: NULL o *s
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != *needle)
	{
		if (!*haystack++)
		{
			return (NULL);
		}
	}
	return ((char *)haystack);
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
