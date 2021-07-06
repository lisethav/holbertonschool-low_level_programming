#include "holberton.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: the string
 * @accept: bytes in the string
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)

{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			j++;
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
