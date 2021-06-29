#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: char pointer
 * Return: Void
 */

void rev_string(char *s)
{
	int rev, count = 0, i = 0;
	char ch;


		while (s[count] != '\0')
		{
			count++;
		}
		rev = count - 1;

		while (rev > i)
		{
			ch = s[i];
			s[i] = s[rev];
			s[rev] = ch;
			rev--;
			i++;
		}
}
