#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers separated by a string.
 * @separator: The string to print between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: Prints all integers passed as variadic arguments, separated
 * by the separator string. If separator is NULL, no separator is printed.
 * Prints a newline at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start (args, n);
for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
}
va_end(args);
}
