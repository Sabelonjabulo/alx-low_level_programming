#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to concatenated string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	concat = malloc(sizeof(char) * len);
	if (concat == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concat[k++] = av[i][j];
		concat[k++] = '\n';
	}
	concat[k] = '\0';

	return (concat);
}
