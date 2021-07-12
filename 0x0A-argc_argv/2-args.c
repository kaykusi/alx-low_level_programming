#include <stdio.h>

/**
 * main - starts main function
 * @argc: interger value
 * @argv: char array pointer
 * Return: always retun 0
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
