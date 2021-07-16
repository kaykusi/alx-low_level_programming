#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function that aloocated memory using malloc
 * @b: unsigned integer value
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
