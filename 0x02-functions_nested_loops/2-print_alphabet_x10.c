#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
