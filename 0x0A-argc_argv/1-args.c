#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv __attribute__((unused)))
{
    /* Print the number of arguments */
    printf("%d\n", argc - 1);

    return (0);
}
