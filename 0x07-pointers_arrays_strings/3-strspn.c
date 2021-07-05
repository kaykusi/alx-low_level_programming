#include "holberton.h"

/**
 * _strspn - function to get length of
 * a prefix substring
 * @s: char pointer
 * @accept: char pointer
 * Return: return integer value
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i, len = 0;

	while (s[count] != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (s[count] == accept[i])
			{
				len++;
				break;
			}
			i++;
		}
		if (accept[i] == '\0')
			return (len);
		count++;
	}
	return (len);
}
