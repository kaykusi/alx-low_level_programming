#include "holberton.h"

/**
 * main - prints out string with _putchar
 *
 * Description: prints out "Holberton" using _putchar
 * Return: 0 on success
 */

int main(void)
{
	char output[] = "Holberton";
	unsigned int i = 0;

	while(i < sizeof(output))
	{
		_putchar(output[i]);
	}
	_putchar("\n");
	return (0);
}
