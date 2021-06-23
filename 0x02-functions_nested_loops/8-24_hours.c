#include "holberton.h"

/**
 * jack_bauer - function to print minutes
 * @void: does not return any value
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int mins = 0;

		while (mins < 60)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
			mins++;
		}
		hours++;
	}
}
