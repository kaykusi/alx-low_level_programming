#include <stdio.h>

/**
 * main - starting point for program execution
 * Return: Always is 0
 */

int main(void)
{
	int i = 2, number;

	printf("Enter number for prime factorization: ");
	scanf("%d", &number);

	while (number != 1)
	{
		while (number % i == 0)
		{
			number /= i;
			if (number == 1)
			{
				printf("%d", i);
				printf("\n");
			}
		}
		i++;
	}
	return (0);
}
