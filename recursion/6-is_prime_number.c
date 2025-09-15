#include "main.h"
/**
* is_prime_number - A function that returns 1 if the input integer
* is a prime number
* @n: Th
*
* Return: Returns 1 if the input integer is a prime number,
* otherwise return 0
*/
int is_prime_number(int n)
{
if (n > 1 && n % n)
{
return (1);
}
else
{
return (0);
}
return (is_prime_number(n));
}
