#include "holberton.h"

/**
 * leet - function to replace
 * @str: char pointer
 * Return: char value
 */

char *leet(char *str)
{
	int count = 0, count2;
	char *ch = "OL?EA??T";

	while (str[count])
	{
		for (count2 = 0; count2 <= 7; count2++)
		{
			if (str[count] == ch[count2] ||
			    str[count] - 32 == ch[count2])
				str[count] = count2 + '0';
		}

		count++;
	}

	return (str);
}
