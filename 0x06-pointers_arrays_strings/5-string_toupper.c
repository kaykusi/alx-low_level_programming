#include "holberton.h"

/**
 * string_toupper - function to change string uppercase
 * @a: char pointer
 * Return: value of char
 */

char *string_toupper(char *a)
{
	int c = 0;

	while (a[c] != '\0')
	{
		if ((a[c] >= 97) && (a[c] <= 122))
			a[c] = a[c] - 32;
	}
	return (a);
}
