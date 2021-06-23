#include "holberton.h"

/**
 * _isalpha - function to check alphabet
 * @c: int to take input
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
