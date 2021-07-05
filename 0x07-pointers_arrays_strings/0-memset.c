#include "holberton.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s.
 *
 * @s: copy the least significant byte to b
 * @b: contains the bytes
 * @n: characters of the pointed array
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)

{
	char *p = (char *)s;
	int i;

	for (i = 0; i != n; ++i)
	{
		p[i] = b;
	}
	return (s);
}
