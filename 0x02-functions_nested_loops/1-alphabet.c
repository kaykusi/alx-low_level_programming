#include "holberton.h"

/**
 * print_alphabet - prints alphabets in lower case.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
