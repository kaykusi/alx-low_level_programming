#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 *
 *
 * Return: always
 *
 */

void print_numbers(void)
{
	int i = 48; /* ascii: 0 */

	while (i <= 57) /* ascii: 9 */
	{
		_putchar(i++);
	}
	_putchar('\n');
}


