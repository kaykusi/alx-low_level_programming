#include "variadic_functions.h"

/**
 * sum_them_all - function to sum.
 * @n: number of parameters
 * Return: sum .
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list count;

	if (n <= 0)
		return (0);

	va_start(count, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(count, int);
		i++;
	}
	va_end(count);
	return (sum);
}
