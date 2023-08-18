#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *                 excluding 2 and 4
 *
 *
 *
 * Return: always void
 *
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 || i != 52)
		{
			_putchar(i++);
		}
	}
	_putchar('\n');
}


