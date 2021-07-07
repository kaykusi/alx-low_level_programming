#include "holberton.h"

/**
 * factorial - function to find factorial
 * @n: integer value to take input
 * Return: -1 for error, integer value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
