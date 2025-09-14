#include "main.h"
/**
* factorial - Returns the factorial of a given number
* @n: The number to compute the factorial of
*
* Return: The factorial of n, if n is negative,
* return -1 to indicate an error
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
