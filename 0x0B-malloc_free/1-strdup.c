#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create a duplicate of a string in a new memory space location
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, NULL if fail
 */

char *_strdup(char *str)
{
	char *dest;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dest[i] = str[i];

	return (dest);
}
