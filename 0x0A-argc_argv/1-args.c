#include <stdio.h>

/**
 * main - starts main function
 * @argc: integer value
 * @argv: char array pointer
 * Return: Always return zero
 */

int main(int argc, char **argv)
{
	if (argc != 0)
	{
		(void)argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
