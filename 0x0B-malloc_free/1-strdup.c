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

	m = malloc(sizeof(str));

	while (str[i])
	{
		len++;
		i++;
	}

	if (m == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i])
	{
		m[i] = str[i];
		i++;
	}
	return (m);
}
