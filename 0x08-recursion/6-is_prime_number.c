#include "holberton.h"

/**
 * get_prime - function to find prime
 * @i: integer value for number
 * @j: integer value for number
 * Return: integer value for prime result
 */

int get_prime(int i, int j)
{
	if (i < 2 || i % j == 0)
		return (0);
	else if (j * j > i)
		return (1);
	else
		return (get_prime(i, j + 1));
}

/**
 * is_prime_number - function to get prime number
 * @n: integer value to test if prime
 * Return: integer value of prime result
 */

int is_prime_number(int n)
{
	return (get_prime(n, 2));
}
