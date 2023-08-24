#include "main.h"

/**
 * print_buffer - prints contents of a buffer
 *
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: always void
 */


void print_buffer(char *b, int size)
{
	int quo, rem, i = 0;
	int bitCounter = 0, numBitsInLine;

	if (size == 0)
		return;
	quo = size / 10;
	rem = size % 10;
	if (rem)
		quo++;
	while (i < quo) /* loop through 10 bits at a time */
	{
		numBitsInLine = (size - rem) > bitCounter ? 10 : rem;
		printf("%.8x: ", bitCounter);
		print_hex_line(b, numBitsInLine, bitCounter);
		print_buffer_line(b, numBitsInLine, bitCounter);
		putchar('\n');
		bitCounter += 10;
		i++;
	}
}
