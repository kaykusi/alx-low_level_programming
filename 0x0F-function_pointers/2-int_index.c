#include "function_pointers.h"

/**
 * int_index - function searches for an integer.
 * @array: integer pointer.
 * @size: integer pointer.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (count < size)
	{
		if (cmp(array[count]) != 0)
			return (count);
		count++;
	}

	return (-1);
}
