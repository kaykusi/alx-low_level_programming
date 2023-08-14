#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int first_digit;
	int second_digit;
	int third_digit;

	for (third_digit = '0'; third_digit <= '9'; third_digit++) /*hundreds place*/
	{
		for (second_digit = (third_digit + 1); second_digit <= '9'; second_digit++)
			/*tens place*/
		{
			for (first_digit = (first_digit + 1); first_digit <= '9'; first_digit++)
				/*ones place*/
			{
				putchar(third_digit);
				putchar(second_digit);
				putchar(first_digit);
				if (third_digit != '7' || second_digit != '8' || first_digit != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
