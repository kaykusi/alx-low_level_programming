#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @seperator: seperator.
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list count;
	unsigned int i;
	char *spc;

	va_start(count, n);
	i = 0;

	while (i < n)
	{
		spc = va_arg(count, char *);
		if (spc == NULL)
			printf("(nil)");
		else
			printf("%s", spc);

		if (i < n - 1 && seperator)
			printf("%s", seperator);
		i++;
	}
	va_end(count);
	printf("\n");
}
