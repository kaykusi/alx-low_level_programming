#include "holberton.h"

/**
 * times_table - function to print 9 times table
 * @void: does not return nay value
 * Return: always 0
 */

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int val = i * j;

			if (val < 10)
			{
				_putchar(' ');
				_putchar(val % 10 + '0');
			}
			else
			{
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '0');
			}
			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
