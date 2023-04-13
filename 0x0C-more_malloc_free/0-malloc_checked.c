#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory block to allocate
 *
 * Return: pointer to allocate memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return ptr;
}
