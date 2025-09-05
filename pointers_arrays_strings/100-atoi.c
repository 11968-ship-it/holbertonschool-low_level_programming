#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1, result = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
break;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
int digit = s[i] - '0';
result = result * 10 - digit;
i++;
}
if (sign == 1)
result = -result;
return (result);
}
