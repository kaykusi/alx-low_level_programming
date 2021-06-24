#include "holberton.h"

/**
 * more_numbers - print numbers 10 times
 * Return: Always 0;
 */

void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int num = 0;

		while (num < 15)
		{
			if (num > 9)
			{
				int num1 = num / 10;

				_putchar(num1 % 10 + '0');
			}
			_putchar(num % 10 + '0');
			num++;
		}
		_putchar('\n');
		count++;
	}
}
