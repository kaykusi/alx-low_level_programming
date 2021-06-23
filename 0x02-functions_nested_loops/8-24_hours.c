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
			putchar(hours / 10 + '0');
			putchar(hours % 10 + '0');
			putchar(':');
			putchar(mins / 10 + '0');
			putchar(mins % 10 + '0');
			putchar('\n');
			mins++;
		}
		hours++;
	}
	return (0);
}
