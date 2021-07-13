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

	if (str[i] == NULL)
		return (NULL);

	m = malloc(sizeof(str));

	if (m == NULL)
		return (NULL);
	while (str[i])
	{
		len++;
	}
	int i = 0;

	while (str[i])
	{
		m[i] = str[i];
		i++;
	}
	return (m);
}
