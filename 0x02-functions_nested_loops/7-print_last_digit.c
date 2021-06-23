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
			return (last_digit);
		}
		else
		{
			last_digit = d % 10;
			last_digit *= -1;
			_putchar(last_digit + '0');
			return (last_digit);
		}
}
