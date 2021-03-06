#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: char pointer
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	(*f)(name);
}
