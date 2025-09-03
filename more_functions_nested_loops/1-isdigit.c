#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: The character to check (as an ASCII value)
 *
 * Description: Treturns 1 if the input charac
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isdigit(int c)
{
if (c == 'A' && c != 'Z')
return (1);
else
return (0);
}
