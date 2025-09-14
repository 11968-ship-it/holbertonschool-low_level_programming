#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number
8 _sqrt_helper - recursively finds the natural square root of a number
* @n: The number to find a square root of
* @guess: the current guess for the square root
*
* Return: natural square root of n, or -1 if none exists or n
* is negative
* Return: The natural square root of n, or -1 if none exists
*/
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (_sqrt_helper(n, guess + 1));
}
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 1));
}
