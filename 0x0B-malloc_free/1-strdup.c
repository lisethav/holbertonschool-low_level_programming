#include "holberton.h"
/**
 * _strdup - function that returns a pointer to a newly allocated in memory
 *
 * @str: array
 * Return: Returns NULL if str = NULL and S
 */
char *_strdup(char *str)
{
	char *s;
	int i, x;

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc(sizeof(char) * i) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (x = 0; x <= i; x++)
	{
		s[x] = str[x];
	}
	return (s);
}
