#include "holberton.h"

/**
 * _strcat - pointer function to concat
 * @dest: char pointer
 * @src: char pointer
 * Return: char value
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, c = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[c] != '\0')
	{
		dest[count] = src[c];
		c++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
