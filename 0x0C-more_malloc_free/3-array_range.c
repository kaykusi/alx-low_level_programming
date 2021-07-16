#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function creates array of integers
 * @min: integer value
 * @max: integer value
 * Return: if min > max of function fails - NULL, otherwise
 * pointer to memory
 */

int *array_range(int min, int max)
{
	int *arr, i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	arr = malloc(sizeof(*arr) * range);

	if (arr != NULL)
	{
		i = 0;

		while (i < range)
		{
			arr[i] = min;
			i++;
			min++;
		}
		return (arr);
	}
	else
		return (NULL);
}
