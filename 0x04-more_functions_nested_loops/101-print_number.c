#include "holberton.h"

/**
 * print_numbers - function to print numbers
 * @c: integer to be checked
 * Return: Always is 0
 */

void print_numbers(int n)
{
	int last_digit, reversed;

	if (n < 0)
	{
		_putchar('-');
		last_digit = (n % 10) * -1;
		n /= -10;
	}
	else
	{
		last_digit = (n % 10);
		n /= 10;
	}
	while (n > 0)
	{
		reversed = n % 10;
		n /= 10;
	}
	while (reversed > 0)
	{
		_putchar(reversed % 10 + '0');
		reversed /= 10;
	}
	_putchar(last_digit);

}
