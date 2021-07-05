#include "holberton.h"

/**
 * _strchr - function to search a string
 * @s: char pointer
 * @c: char value
 * Return: char pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
