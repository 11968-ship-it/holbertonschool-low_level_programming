#include "main.h"

/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: The character to check (as an ASCII value)
 *
 * Description: This function returns 1 if the input character is
 * an uppercase letter (A to Z), and 0 otherwise.
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
