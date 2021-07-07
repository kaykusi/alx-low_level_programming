#include "holberton.h"

/**
 * _pow_recursion - function to find exponent of a number
 * @x: integer value for base
 * @y: integer value for power
 * Return: integer value of result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
