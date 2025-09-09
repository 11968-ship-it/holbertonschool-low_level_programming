#include "main.h"

/**
 * _strpbrk - Function that searches a string
 * @s: A pointer to the string to be scanned
 * @accept: A pointer to the string that contains the bytes
 *
 * Description: It locates the first occurrence in the string s
 * then returns a pointer to the bytes in s that matches one
 *  of the bytes in accept or NULL if no such byte is found
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
