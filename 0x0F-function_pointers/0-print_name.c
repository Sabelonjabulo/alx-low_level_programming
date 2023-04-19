#include "function_pointers.h"
#include <stdio.h>

/**
 *  print_name - prints name by using pointer to function
 *  @name: input name
 *  @f: pointer to function
 *  Return: null
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
