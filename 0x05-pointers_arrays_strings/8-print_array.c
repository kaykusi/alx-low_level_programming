#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print elements in an array
 * @a: integer pointer to array
 * @n: integer for length of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	_putchar('\n');
}
