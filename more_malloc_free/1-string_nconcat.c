#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: Pointer to newly allocated space containing s1 followed by
 * the first n bytes of s2, null-terminated. If function fails,
 * returns NULL. If NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, i;
    char *result;

    if (s1 != NULL)
        len1 = strlen(s1);
    if (s2 != NULL)
        len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    result = malloc(len1 + n + 1);
    if (result == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    for (i = 0; i < n; i++)
        result[len1 + i] = s2[i];

    result[len1 + n] = '\0';

    return (result);
}
