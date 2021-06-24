#include "holberton.h"

/**
 * main - main entry
 * Return: Always O.
 */

int main(void)
{
	int count = 1;

	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("fizzbuzz");
			_putchar(' ');
		}
		else if (count % 3 == 0)
		{
			printf("fizz");
			_putchar(' ');
		}
		else if (count % 5 == 0)
		{
			printf("buzz");
			_putchar(' ');
		}
		else
		{
			printf("%d", count);
			_putchar(' ');
		}
		count++;
	}
}
