
#include "main.h"

/**
 * _strncpy - Copies at most n bytes of a string from src to dest
 * @dest: The buffer storing the copied string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Description: If the length of src is less than n, the remainder of dest
 * will be filled with null bytes
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
