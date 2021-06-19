#include <stdio.h>
#include <unistd.>

/**
 * main - use write function to print string
 *
 * Description: main function prints and that piece
 * of art is useful" - Dora Korpar, 2015-10-19
 * Return: 0
 */

int main(void)
{
	write(2, "and that piece of art is useful\"
- Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
