#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: integer pointer
 * @size: integer pointer
 * Return: char pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *len;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	len = malloc(nmemb * size);

	if (len != NULL)
	{
		i = 0;

		while (i < nmemb * size)
		{
			len[i] = '\0';
			i++;
		}

		return (len);
	}
	else
		return (NULL);
}
