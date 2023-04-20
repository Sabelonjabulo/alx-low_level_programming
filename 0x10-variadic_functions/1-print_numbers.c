#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a given number of integers, separated by a given
 *                 separator character, followed by a newline
 *
 * @separator: the separator character to use between integers
 * @n: the number of integers to print
 * @...: the integers to print, passed variadically
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    int num;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        num = va_arg(args, int);
        printf("%d", num);

        if (separator && i < n - 1)
            printf("%s", separator);
    }

    printf("\n");
    va_end(args);
}
