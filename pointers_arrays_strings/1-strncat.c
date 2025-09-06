#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to append.
 * @n: The maximum number of bytes to append from src.
 *
 * Description: This function appends at most `n` bytes from the `src`
 * string to the end of the `dest` string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
i++;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
