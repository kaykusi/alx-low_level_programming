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
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
