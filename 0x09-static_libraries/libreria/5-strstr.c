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

	while (*haystack)
	{
		haystack++;
			if (*haystack == *needle)
		{
			return (haystack);
		}
	}

		return (NULL);
}
