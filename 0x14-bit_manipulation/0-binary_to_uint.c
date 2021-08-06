#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 1;
	int k;

	if (b == NULL)
	return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		return (0);
	}
	k--;
	while (k >= 0)
	{
		if (b[k] == '1')
		i = i + j;
		k--;
		j = j * 2;
	}
	return (i);
}
