#include "holberton.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer
 * @src: pointer
 * @n: number
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while ((dest[j] = src[i]) != '\0')
		j++;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
