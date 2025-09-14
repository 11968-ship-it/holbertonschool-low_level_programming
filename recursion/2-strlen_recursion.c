#include "main.h"
/**
* _strlen_recursion - Returns the length of a string using recursion
* @s: A pointer to the string
* Description: Takes a string as input and returns its length by
* calling itself until it reaches the null terminator of the string
*
* Return: The number of characters in the string
* (excluding the null terminator)
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
