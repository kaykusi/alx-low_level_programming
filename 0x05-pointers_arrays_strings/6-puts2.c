#include "holberton.h"

/**
 * puts2 - prints each character
 * @str: char pointer
 * Return: void
 */

void puts2(char *str)
{
	int count = 0, b;

	while (str[count] != '\0')
	{
		count++;
	}

	for (b = 0; b < count; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
