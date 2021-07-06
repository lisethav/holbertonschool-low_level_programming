#include "holberton.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 *
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			haystack = &(haystack[i]);
			return (char *)haystack;
		}
	}
	return ('\0');
}
