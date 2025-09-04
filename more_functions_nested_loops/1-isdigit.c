#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: The character to check (as an ASCII value)
 *
 * Description: Treturns 1 if the input digit
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
