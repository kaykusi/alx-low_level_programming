#include <stdio.h>

/**
 * main - Prints the size of various types on the computer
 *               .
 *
 * Return: Always 0.
 */
int main(void)
{
	puts("Size of a char: " + sizeof(char) - 1);
	puts("Size of an int: " + sizeof(int) - 1);
	puts("Size of a long int: " + sizeof(long int) - 1);
	puts("Size of a long long int: " + sizeof(long long int) - 1);
	puts("Size of a float: " + sizeof(float) - 1);

	return (0);
}
