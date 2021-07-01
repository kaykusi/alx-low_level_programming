#include "holberton.h"

/**
 * _strncat - main entry
 * @dest: char pointer
 * @src: char pointer
 * @n: integer value
 * Descrption: concatenate two strings with max numbers
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, c = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (src[c] != '\0' && c < n)
	{
		dest[count] = src[c];
		c++;
		count++;
	}
	return (dest);
}
