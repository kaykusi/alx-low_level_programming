#ifndef main_h
#define main_h

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 *
 * @c: input argument
 * Return: 1 if the character is uppercase, 0 if lowercase
 *
 */

int _isupper(int c);

/**
 * _isdigit - checks for a digit 0 to 9
 *
 * @c: input argument
 * Return: 1 if the digit is between 0 and 9, 0 if not
 *
 */

int _isdigit(int c);

/**
 * mul - multiply two digits
 *
 * @a: input argument
 * @b: input argument
 * Return: the multplied number
 *
 */

int mul(int a, int b);

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 *
 *
 * Return: always
 *
 */

void print_numbers(void);

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *                 excluding 2 and 4
 *
 *
 *
 * Return: always void
 *
 */

void print_most_numbers(void);

/**
 * more_numbers - print 0..14 x 10
 *
 * Return: always void
 */

void more_numbers(void);

/**
 * print_line - prints a line n'_' long
 *
 * @n: number of times to print '_'
 *
 * Return: always void
 */

void print_line(int n);
#endif
