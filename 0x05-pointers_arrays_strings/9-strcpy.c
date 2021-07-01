#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src, include NULL
 *
 * @dest: pointer
 * @src: pointer
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
