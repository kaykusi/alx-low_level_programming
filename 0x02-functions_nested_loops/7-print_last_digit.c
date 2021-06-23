#include "holberton.h"

/**
 * print_last_digit - function to print last digit
 * @d: int to take input
 * Return: 0
 */

int print_last_digit(int d)
{
		int last_digit;

		if (n > 0)
		{
			last_digit = n % 10;
			putchar(last_digit + '0');
		}
		else
		{
			n = -n;
			last_digit = n % 10;
			putchar(last_digit + '0');
		}
		return (0);
}
