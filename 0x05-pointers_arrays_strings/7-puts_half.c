#include "holberton.h"

/**
 * puts_half - function prints half the string
 * @str: char pointer
 * Return: void
 */

void puts_half(char *str)
{
	int count, half, n;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 != 0)
	{
		half = (count - 1) / 2;
		n = count - half;
	}
	else
	{
		half = (count) / 2;
		n = count - half;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
}
