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
        switch (format[i])
        {
            case 'c':
                if (printed)
                    printf(", ");
                printf("%c", va_arg(args, int));
                printed = 1;
                break;
            case 'i':
                if (printed)
                    printf(", ");
                printf("%d", va_arg(args, int));
                printed = 1;
                break;
            case 'f':
                if (printed)
                    printf(", ");
                printf("%f", va_arg(args, double));
                printed = 1;
                break;
            case 's':
                if (printed)
                    printf(", ");
                str = va_arg(args, char *);
                if (!str)
                    printf("(nil)");
                else
                    printf("%s", str);
                printed = 1;
                break;
            default:
                break;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}

