#include "holberton.h"

/**
 * _strcpy - function to copy to dest
 * @dest: char pointer to receive address
 * @src: char pointer to hold address
 * Return: char pointer
 */

char *_strcpy(char *dest, char *src)
{
		int c = 0;

		while (src[c] != '\0')
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = src[c];
		return (dest);
	}
