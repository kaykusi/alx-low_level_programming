#include "variadic_functions.h"

/**
 * print_numbers - function to prints numbers .
 * @separator: separator to print between numbers
 * @n: number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers;
	va_list arg_list;

	va_start(arg_list, n);
	i = 0;

	while (i < n)
	{
		numbers = va_arg(arg_list, int);
		printf("%d", numbers);
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
