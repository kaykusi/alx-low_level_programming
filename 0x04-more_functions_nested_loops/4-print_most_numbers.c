#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *                 excluding 2 and 4
 *
 *
 *
 * Return: always void
 *
 */

void print_most_numbers(void)
{
	int i = 48; /* ascii: 0 */

	while (i <= 57) /* ascii: 9 */
	{
		if (i == 50 || i == 52) /* skip 2 & 4 */
		{
			i++;
			continue;
		}
		_putchar(i++);
	}
	_putchar('\n');
}


