#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: char pointer
 * Return: Void
 */

void rev_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	int rev = count - 1;

	while (s[rev] != '\0')
	{
		_putchar(s[rev]);
		rev--;
	}
}
