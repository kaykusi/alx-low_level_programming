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
	int i = 0;

	while (i < 9)
	{
		_putchar(output[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
