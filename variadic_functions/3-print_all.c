#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on a format string
 * @format: A string of characters representing argument types:
 * 'c' = char
 * 'i' = integer
 * 'f' = float
 * 's' = string
 *
 * Description: If the string argument is NULL, prints (nil) instead
 * Invalid format characters are ignored.
 * Prints a new line at the end.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, printed = 0;
char *str;
va_start(args, format);
while (format && format[i])
{
if (printed)
printf(", ");
if (format[i] == 'c')
printf("%c", va_arg(args, int)), printed = 1;
if (format[i] == 'i')
printf("%d", va_arg(args, int)), printed = 1;
if (format[i] == 'f')
printf("%f", va_arg(args, double)), printed = 1;
if (format[i] == 's')
{
str = va_arg(args, char *);
if (!str)
printf("(nil)");
else
printf("%s", str);
printed = 1;
}
i++;
}
va_end(args);
printf("\n");
}
