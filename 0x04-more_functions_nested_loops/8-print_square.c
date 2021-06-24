#include "holberton.h"

/**
 * print_square - function to print square
 * @size: integer to check
 * Return: Always 0.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int check = 0;

		while (check < size)
		{
			int check2 = 0;

			while (check2 < size)
			{
				putchar(35);
				check2++;
			}
			check++;
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
