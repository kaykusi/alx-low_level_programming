#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: positive of negative using if...else statements
 * the parameter in use is the int type
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	/*this is ur code*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
	/*if the first condition is true, do this*/
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	 /*if the first condition is true, do this*/
		printf("%d is zero\n", n);
	}
	else
	{
	/*if all fails, do this*/
		printf("%d is negative\n", n);
	}
	return (0);
}
