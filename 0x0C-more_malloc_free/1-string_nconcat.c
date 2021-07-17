#include <stdlib.h>
#include <stdio.h>
/**
  * malloc_checked - function that allocates memory using malloc
  *
  * @b: size
  * Return: pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		out = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		out = malloc(sizeof(char) * (len1 + n + 1));
	if (out == NULL)
		return (NULL);

	out = _strcpy(out, s1);
	out = _strncat(out, s2, n);
	return (out);
}
