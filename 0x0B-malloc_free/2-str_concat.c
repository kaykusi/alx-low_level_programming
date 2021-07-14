#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function to concat a string
 * @s1: char pointer
 * @s2:char pointer
 * Return: char pointer in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, len = 0, concat = 0;
	char *mul;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = s2 = "";
	}
	else
	{
		while (s1[i] || s2[i])
		{
			len++;
			i++;
		}
		mul = malloc(sizeof(char) * len);

		if (mul != NULL)
		{
			for (i = 0; s1[i]; i++)
			{
				mul[concat++] = s1[i];
			}

			for (i = 0; s2[i]; i++)
			{
				mul[concat++] = s2[i];
			}
			return (mul);
		}
		else
		{
			return (NULL);
		}
	}
}
