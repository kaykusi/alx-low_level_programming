#include "holberton.h"

/**
 * _memset - function that fills up memory
 * @s: char pointer
 * @b: char value
 * @n: integer value
 * Return: char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
