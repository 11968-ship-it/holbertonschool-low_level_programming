#include "main.h"

/**
 * _strpbrk - Function that searches a string
 * 
 * Description: Searches a string for any of a set of bytes
 * @s: The string to search
 * @c: The character to find
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (0);
}
