#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Pointer to the buffer in which we copy the string
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
