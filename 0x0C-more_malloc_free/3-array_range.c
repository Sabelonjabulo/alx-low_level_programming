#include "main.h"

/**
 * array_range - creates an array of integers from min to max 
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: NULL if allocation fails
 */

int *array_range(int min, int max)
{
    int *arr, i, size;

    if (min > max)
        return NULL;

    size = max - min + 1;

    arr = malloc(size * sizeof(int));

    if (arr == NULL)
        return NULL;

    for (i = 0; i < size; i++)
        arr[i] = min++;

    return arr;
}
