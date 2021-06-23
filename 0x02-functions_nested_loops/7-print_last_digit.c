#include "holberton.h"

/**
 * print_last_digit - function to print last digit
 * @d: int to take input
 * Return: 0
 */

int print_last_digit(int d)
{
	if (d >= 0)
	{
		d = d % 10;
		return (d);
	}
	else
	{
		d = d * (-1);
		dd = d % 10;
		return (d);

	}
}
