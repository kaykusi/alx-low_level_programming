#include "holberton.h"

/**
 * reverse_array - reverse array
 * @a: integer pointer
 * @n: integer pointer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j;
	n--;

	while (i <= n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
		i++;
	}
}
