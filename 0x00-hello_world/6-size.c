#include <stdio.h>

/**
 * main - Prints the size of various types on the computer
 *               .
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
  	printf("Size of an int: %u byte(s)\n", sizeof(int));
  	printf("Size of a long int: %lu byte(s)\n", sizeof(long))
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
 	printf("Size of a float: %lu byte(s)\n", sizeof(float));

        return (0);
}