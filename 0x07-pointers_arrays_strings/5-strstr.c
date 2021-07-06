#include "holberton.h"

/**
 * _strstr - function locate a subtsring
 * @haystack: char pointer
 * @needle: char pointer
 * Return: char pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *track = needle;

		while (*track == *haystack && *track != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			track++;
		}
		if (*track == '\0')
			return (start);
		haystack = start + 1;
	}
	return ('\0');
}
