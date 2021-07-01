#include "holberton.h"

/**
 * _strncpy - main entry
 * @dest: char pointer
 * @src: char pointer
 * @n: integer value
 * Return: return dest value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
