#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates block
 * @ptr: char pointer
 * @old_size: unsigned integer value
 * @new_size: unsigned integer value
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);

		if (ptr1 == NULL)
			return (NULL);

		return (ptr1);
	}
	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);

	ptr2 = ptr;

	for (i = 0; i < old_size; i++)
		ptr1[i] = ptr2[i];

	free(ptr);

	return (ptr1);
}
