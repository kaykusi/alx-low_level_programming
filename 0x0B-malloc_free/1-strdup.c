#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function returns newly allocted memory
 * which contains a copy
 * @str: char pointer
 * Return: char value
 */

char *_strdup(char *str)
{
	char *m;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
	}

	m = malloc(sizeof(str) * (len + 1));

	if (m == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		m[i] = str[i];
		i++;
	}
	m[len] = '\0';
	return (m);
}
