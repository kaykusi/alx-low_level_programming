#include "holberton.h"

/**
 * _strlen - function to print length
 * @s: char to take value
 * Return: return int value
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s[count] != '\0')
	{
		*s[count];
		count++;
	}
	return (count);
}
