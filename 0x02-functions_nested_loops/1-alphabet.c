#include "holberton.h"

/**
 * main - check the code for ALX School students.
 * Description: prints lower case alphabets
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char l = 'a';
	
	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
