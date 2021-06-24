#include "holberton.h"

/**
 * print_diagonal - funtion to print diagonal lines
 * @n: integer to check
 * Return: Always 0;
 */

void print_diagonal(int n)
{

		int check = 0;

		while (check < a)
		{
			int check2 = 0;

			while (check2 < a)
			{
				if (check2 == check)
				{
					putchar(92);
				}
				else
				{
					putchar(' ');

				}
				check2++;
			}
			putchar('\n');
			check++;
		}
		putchar('\n');
}
