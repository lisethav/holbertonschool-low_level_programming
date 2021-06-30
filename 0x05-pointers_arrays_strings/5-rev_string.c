#include "holberton.h"
/**
 * rev_string - name normal and reverse
 *
 * @s: pointer
 * Return: the end
 */
void rev_string(char *s)
{
	int i, j;
	char new[500];

	i = 0;
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	j = 0;
	while (i >= 0)
	{
		s[i] = new[j];
		i--;
		j++;
	}
}
