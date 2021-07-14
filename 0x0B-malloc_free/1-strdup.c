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
	{
		return (NULL);
	}
	else
	{
	while (str[i])
	{
		len++;
		i++;
	}
	m = malloc(sizeof(str) * (len + 1));

	if (m != NULL)
	{
		i = 0;

		while (str[i])
		{
			m[i] = str[i];
			i++;
		}
		m[len] = '\0';
		return (m);
	}
	else
	{
		return (NULL);
	}
	}
}
