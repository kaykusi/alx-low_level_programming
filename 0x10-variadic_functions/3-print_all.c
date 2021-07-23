#include "variadic_functions.h"

/**
 * print_all - function prints all of the arguments
 * @format: specifies the arguments
 */
void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *s;
	va_list list;

	va_start(list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			flag = 0;
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			flag = 0;
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			flag = 0;
			break;
		case 's':
			s = va_arg(list, char*);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			flag = 0;
			break;
		default:
			flag = 1;
			break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
