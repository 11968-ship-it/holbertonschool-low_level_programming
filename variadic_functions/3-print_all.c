#include <stdio.h>
#include <stdarg.h>
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
 * Prints a newline at the end. Ignores unknown format characters
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str;
char *sep = "";
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
{
printf("%s", sep);
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
break;
}
sep = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
