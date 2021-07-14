#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array
 * @c: char to initialize
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;
	a = (char *) malloc(sizeof(char));

	if (size == NULL)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
