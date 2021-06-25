#include "holberton.h"

/**
 * print_triangle - function to print triangle
 * @size: integer to check
 * Return: always return 0
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int row = 0;

		while (row < size)
		{
			int col = 0;

			while (col < (size - row))
			{
				_putchar(' ');
				col++;
			}
			int sym = 0;

			while (sym < row)
			{
				_putchar(35);
				sym++;
			}
			row++;
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
