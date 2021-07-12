#include <stdio.h>

/**
 * main - the main funtion that starts
 * @argc: int value
 * @argv: char array pointer
 * Return: integer value
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
