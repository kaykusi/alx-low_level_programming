#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c : character for checking
 *
 * Return: 1 if successful, 0 if unsuccessful
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
