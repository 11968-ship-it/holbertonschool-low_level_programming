#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring
 *
 * Description: It gets the hat gets the length of a prefix substring
 *@:
 *@:
 *
 * Return: A Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
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
