#include "main.h"
#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: The main string to search within
 * @needle: The substring to search for
 *
 * Description: Searches the first occurrence of substring
 * needle in haystack string then returns a pointer to the
 * begining of the substring or NULL if no such byte is found
 *
 * Return: A pointer to the beginning of the located substring
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == '\0')
return (haystack)
while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (needle[i] == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
