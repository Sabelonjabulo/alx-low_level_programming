#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a given comparison function
 *
 * @array: pointer to the array to search in
 * @size: the number of elements in the array
 * @cmp: pointer to the comparison function to be used
 *
 * Return: the index of the first element for which the comparison function does not return 0, or -1 if no such element is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
