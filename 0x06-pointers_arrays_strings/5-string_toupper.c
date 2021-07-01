#include "holberton.h"

/**
 * string_toupper - function to change string uppercase
 * @upp: char pointer
 * Return: value of char
 */

char *string_toupper(char *upp)
{
	int c;

	while (upp[c] != '\0')
	{
		if ((upp[c] >= 97) && (upp[c] <= 122))
			upp[c] = upp[c] - 32;
	}
	return (upp);
}
