#include "holberton.h"

/**
 * _strcat - This function appends the src string to the dest string
 *
 * @dest: array
 * @src: array
 * Return: string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;
	while ((dest[i++] = src[j++]) != '\0')
		;
	return (dest);
}
