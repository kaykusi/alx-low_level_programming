#include "holberton.h"

/**
 * _puts_recursion - function to print string in recursion
 * @s: char pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
