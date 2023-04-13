#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to concatenate from s2
 *
 * Return: NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int s1_len, s2_len;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    s1_len = strlen(s1);
    s2_len = strlen(s2);

    if (n >= s2_len)
        n = s2_len;

    result = malloc(s1_len + n + 1);

    if (result == NULL)
        return NULL;

    strncpy(result, s1, s1_len);
    strncpy(result + s1_len, s2, n);
    result[s1_len + n] = '\0';

    return result;
}
