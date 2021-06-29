#include "holberton.h"

/**
 * _puts - function to print a string
 * @str: pointer to memory
 * Return: Void
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
			 count++;
	}
	_putchar('\n');
}
