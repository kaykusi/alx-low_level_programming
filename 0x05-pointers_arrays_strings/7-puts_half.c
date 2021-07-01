#include "holberton.h"

/**
 * puts_half - function prints half the string
 * @str: char pointer
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0;
	int n;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 != 0)
	{
		count++;
	}
	for (n = count / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
