#include "holberton.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: copies n characters from the src into the array pointed to by dest
 * @src: copies n characters from the src into the array pointed to by dest
 * @n: number of characters
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int i = 0;
	
	while (i < n)
	{
		*src++ = *dest++;
		n--;
	}

	return (dest);
}
