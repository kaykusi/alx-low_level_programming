#include "holberton.h"

/**
 * _abs - prints absolute value
 * @n: takes input
 * Return: 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else
	{
		return (n);
	}
}
