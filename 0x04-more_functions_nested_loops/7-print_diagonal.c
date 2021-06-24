#include "holberton.h"

/**
 * print_diagonal - funtion to print diagonal lines
 * @n: integer to check
 * Return: Always 0;
 */

void print_diagonal(int n)
{

		int check = 0;

		while (check < n)
		{
			int check2 = 0;

			while (check2 < n)
			{
				if (check2 == check)
				{
					_putchar(92);
				}
				else
				{
					_putchar(' ');

				}
				check2++;
			}
			_putchar('\n');
			check++;
		}
		_putchar('\n');
}
