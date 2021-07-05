#include "holberton.h"

/**
 * _memcpy - function copies bytes from one memory to another
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned integer
 * Return: char pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

		while (count < n)
		{
			dest[count] = src[count];
			count;
		}
	return (dest);
}
