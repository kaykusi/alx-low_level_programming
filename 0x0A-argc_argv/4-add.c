#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - starts main function
 * @argc: integer to count arguments
 * @argv: char array pointer
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int i = 0, sub, sum = 0;

	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		while (argv[argc][i] != '\0')
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		sub = atoi(argv[argc]);
		sum += sub;
	}
	printf("%d\n", sum);
	return (0);
}
