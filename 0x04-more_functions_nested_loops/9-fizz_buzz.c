#include <stdio.h>
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
			printf(" ");
		}
		else if (count % 3 == 0)
		{
			printf("fizz");
			printf(" ");
		}
		else if (count % 5 == 0)
		{
			printf("buzz");
			printf(" ");
		}
		else
		{
			printf("%d", count);
			printf(" ");
		}
		count++;
	}
	printf("\n");
	return (0);
}
