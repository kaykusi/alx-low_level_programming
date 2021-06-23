#include "holberton.h"

/**
 * print_last_digit - function to print last digit
 * @d: int to take input
 * Return: 0
 */

int print_last_digit(int d)
{
		int last_digit;

		if (d > 0)
		{
			last_digit = d % 10;
			_putchar(last_digit + '0');
		}
		else
		{
			d = -d;
			last_digit = d % 10;
			_putchar(last_digit + '0');
		}
		return (d);
}
