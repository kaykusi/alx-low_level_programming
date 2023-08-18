#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: input argument
 * Return: 1 if the character is uppercase, 0 if lowercase
 *
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


