#include "main.h"

/**
 * _calloc - allocates memory for an arra and sets it to 0
 * @nmemb: the number of ellements in the array
 * @size: the size of each element
 *
 * Return: NULL if nmmemb or os 0, or if memory allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	if (nmemb ==0 || size == 0)
		return NULL;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	       return NULL;
	
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return NULL;

	return ptr;	
}
