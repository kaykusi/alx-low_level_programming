#include "holberton.h"

/**
 * _strcmp - main entry
 * @s1: char pointer
 * @s2: char pointer
 * Description: compare to strings
 * Return: return integer  value of strings
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0, i = 0;

	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0')
	{
		count++;
	}

	if (s1[count] != s2[count])
	{
		i = s1[count] - s2[count];
	}

	return (i);
}
