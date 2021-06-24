#include "holberton.h"

/**
 * print_numbers - prints numbers from 0 - 9
 * Return: Always 0.
 */

void print_numbers(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
