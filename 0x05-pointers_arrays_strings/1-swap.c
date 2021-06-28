#include "holberton.h"

/**
 * swap_int - swaps the value
 * @a: integer to point to memory
 * @b: integer to point to memory
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
