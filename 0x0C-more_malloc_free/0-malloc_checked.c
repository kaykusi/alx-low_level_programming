#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function that aloocated memory using malloc
 * @b: unsigned integer value
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		return (98);

	return (ptr);
}
