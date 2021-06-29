#include "holberton.h"

/**
 * puts2 - prints each character
 * @str: char pointer
 * Return: void
 */

void puts2(char *str)
{
	int count, scan = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	while (scan < count)
	{
		_putchar(str[scan]);
		scan += 2;
	}
	_putchar ('\n');
}
