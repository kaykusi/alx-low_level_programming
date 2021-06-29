#include "holberton.h"

/**
 * puts2 - prints each character
 * @str: char pointer
 * Return: void
 */

void puts2(char *str)
{
	int count;
	while (str[count] != '\0')
	{
		if (count % 2 == 0)
			_putchar(str[count]);
				 count++;
	}
	_putchar('\n');
}
