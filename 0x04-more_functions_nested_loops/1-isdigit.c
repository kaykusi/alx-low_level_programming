#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 *
 * @c: input argument
 * Return: 1 if the character is uppercase, 0 if lowercase
 *
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
		return (1);
	return (0);
}


