#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - function for array pointer
 * @size: integer to determine size of array
 * @c: char for array values
 * Return: char value
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *m;

	if (size == 0)
		return (NULL);

	m = malloc(sizeof(c) * size);

	while (i < size)
	{
		if (m == NULL)
		{
			return (NULL);
		}
		m[i] = c;
		i++;
	}
	return (m);
}
