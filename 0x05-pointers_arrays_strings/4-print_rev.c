#include "holberton.h"

/**
 * print_rev - print a reverse string
 * @s: char pointer
 * Return: Void
 */

void print_rev(char *s)
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
