#include <stdio.h>

/**
 * main - prints the string using the printf function
 *
 * Description: main function prints the size of the
 * operands
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long lli;
	float f;

	printf("Size of a char: %u byte(s)\n", sizeof(c));
	printf("Size of an int: %u byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(lli));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
