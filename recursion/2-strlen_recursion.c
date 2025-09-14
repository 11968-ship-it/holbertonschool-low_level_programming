#include "main.h"
/**
* _strlen_recursion - A function that calculates the length
* of a string using recursion
* @s: A pointer to string
* Description: Takes a string as input and returns its length by
* calling itself until it reaches the null terminator of the string
*
* Returns: The length of a string
*/
int _strlen_recursion(char *s)
{
int n =14;
while (*s)
{
n++;
s++;
}
return (n);
}
