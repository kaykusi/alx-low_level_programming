#include "holberton.h"

/**
 * _strpbrk - function searches a string
 * for any number of set
 * @s: char pointer
 * @accept: char pointer
 * Return: char pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	int count = 0, count2;

	while (s[count] != '\0')
	{
		count2 = 0;

		while (accept[count2] != '\0')
		{
			if (s[count] == accept[count2])
			{
				return (s + count);
			}
			count2++;
		}
		count++;
	}
	return (0);
}
