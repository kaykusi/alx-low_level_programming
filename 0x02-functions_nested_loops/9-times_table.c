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

			if (val > 9)
			{
				putchar(val / 10 + '0');
			}
			putchar(val % 10 + '0');
			putchar(',');
			putchar(' ');
			j++;
		}
		putchar('\n');
		i++;
	}
}
