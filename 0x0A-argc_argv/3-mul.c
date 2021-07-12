#include <stdio.h>
#include <stdlib.h>

/**
 * main - starts main function
 * @argc: integer value to count arguments
 * @argv: char array pointer to hold values
 * Return: return 0 or 1
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
		printf("Error\n");

	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
