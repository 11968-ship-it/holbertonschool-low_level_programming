#include "main.h"
/**
* _pow_recursion - Returns the value of x raised to the power of y
* @x: The base integer
* @y: The exponent integer
*
* Return: The value of x raised to the power y if y is
* negative, returns -1 to indicate an error
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1);
}
}
