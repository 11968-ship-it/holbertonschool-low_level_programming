#include "main.h"
/**
* _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Description: This function calculates the number of characters
 * in a string, excluding the null terminator.
 *
 * Return: Length of the string
*/
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
