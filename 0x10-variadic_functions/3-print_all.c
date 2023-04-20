#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints any type of argument passed to the function.
 * @format: list of types of arguments passed to the function.
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s, *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;

			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;

			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;

			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}

