#include "holberton.h"

/**
 * _find_rt - function to find square root
 * @x: integer value for square
 * @y: integer value for square of x
 * Return: integer value for square
 */

int _find_rt(int x, int y)
{
	if (x == (y * y))
	{
		return (y);
	}
	else if (x > (y * y))
	{
		return (_find_rt(x, y + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - function to find square root
 * @n: integer for square root
 * Return: integer value for square root
 */

int _sqrt_recursion(int n)
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
		return (_find_rt(n, 1));
	}
}
