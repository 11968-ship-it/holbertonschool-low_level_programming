#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to find a square root of
*
* Return: The 
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (n * _sqrt_recursion(n, -1));
}
