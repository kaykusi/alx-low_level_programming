#include "holberton.h"

/**
 * _strlen_recursion - function to return length of
 * a string
 * @s: char pointer
 * Return: integer value of length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
