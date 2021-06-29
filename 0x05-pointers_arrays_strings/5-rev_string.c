#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: char pointer
 * Return: Void
 */

void rev_string(char *s)
{
	int rev, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	rev = count - 1;

	while (s[rev] != '\0')
	{
		_putchar(s[rev]);
		rev--;
	}
	_putchar('\n');
}
