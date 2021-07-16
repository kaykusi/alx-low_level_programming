#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concats two strings
 * @s1: char pointer
 * @s2:  char pointer
 * @n: bytes of string
 * Return: Null if fail, pointer to memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcat;
	unsigned int len = n, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		len++;
		i++;
	}

	strcat = malloc(sizeof(char) * len);

	if (strcat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; len++, i++)
		strcat[len] = s1[i];

	for (i = 0; s2[i] && i < n; len++, i++)
		strcat[len] = s2[i];

	return (strcat);
}
