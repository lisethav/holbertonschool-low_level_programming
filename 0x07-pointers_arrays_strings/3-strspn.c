#include "holberton.h"
/**
 * _strspn - unction that gets the length of a prefix substring
 *
 * @s: initial segment
 * @accept: bytes
 * Return: returns the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
