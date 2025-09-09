#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The characters to match
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j;
int match;
while (s[i])
{
match = 0;
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
match = 1;
break;
}
}
if (!match)
break;
i++;
}
return i;
}
