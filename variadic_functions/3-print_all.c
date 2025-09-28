#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on a format string
 * @format: String of types of arguments passed:
 * 'c' = char
 * 'i' = integer
 * 'f' = float
 * 's' = string
 *
 * Description: Prints (nil) if string is NULL.
 * Prints a newline at the end. Ignores unknown format characters.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, printed = 0;
char *str;
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
{
if (printed)
printf(", ");
printed = 1;
if (format[i] == 'c')
printf("%c", va_arg(args, int));
if (format[i] == 'i')
printf("%d", va_arg(args, int));
if (format[i] == 'f')
printf("%f", va_arg(args, double));
if (format[i] == 's')
{
str = va_arg(args, char *);
if (!str)
printf("(nil)");
else
printf("%s", str);
}
}
i++;
}
va_end(args);
printf("\n");
}
