#include "main.h"
/**
*  _sqrt_helper - Recursively finds the natural square root of a number
* @n: The number to find a square root of
* @guess: the current guess for the square root
*
* Return: natural square root of n if found
*/
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (_sqrt_helper(n, guess + 1));
}
/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to find a square root of
* Return: The natural square root of n, or -1 if n does not have
* a natural square root or is negative
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 1));
}
