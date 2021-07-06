#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - function to print two diagonals
 * of a square matrix
 * @a: int pointer
 * @size: int value
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, count, count2;

	for (x = 0, count = 0; x < (size * size); x += size + 1)
		count = count + a[x];

	for (x = size - 1, count2 = 0; x <= (size * size) - 2; x += size - 1)
		count2 = count2 + a[x];

	printf("%d, %d\n", count, count2);
}
