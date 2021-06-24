#include "holberton.h"

/**
 * print_line - function to draw a line
 * @n: integer to be checked
 *Return: Always 0;
 */

void print_line(int n)
{
	int check = 0;

	while (check < n)
	{
		_putchar(95);
		check++;
	}
	_putchar('\n');
}
