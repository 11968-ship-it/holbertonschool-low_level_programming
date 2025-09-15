#include "main.h"
/**
* check_prime - helper function to check for primality recursively
* @n: Number to check
* @i: Divisor
* Return: 1 if it is prime, otherwise 0
*/
int check_prime(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (check_prime(n, i + 1));
}
/**
* is_prime_number - A function that returns 1 if the input integer
* is a prime number
* @n: Number to check
* Return: Returns 1 if the input integer is a prime number,
* otherwise return 0
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (check_prime(n, 2));
}
