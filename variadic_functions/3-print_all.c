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
int _putchar(char c);
void print_str(char *str)
{
    int i = 0;

    if (!str)
    {
        char *nil = "(nil)";
        while (nil[i])
        {
            _putchar(nil[i]);
            i++;
        }
        return;
    }

    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
}
void print_int(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
        num = n;

    if (num / 10)
        print_int(num / 10);

    _putchar((num % 10) + '0');
}
void print_float(double f)
{
    int int_part = (int)f;
    double frac_part = f - int_part;
    int i;

    if (f < 0)
    {
        _putchar('-');
        int_part = -int_part;
        frac_part = -frac_part;
    }

    print_int(int_part);
    _putchar('.');
    if (frac_part < 0)
        frac_part = -frac_part;

    frac_part *= 1000000;

    int frac_int = (int)(frac_part + 0.5);
    i = 100000;
    while (i > 1 && frac_int / i == 0)
    {
        _putchar('0');
        i /= 10;
    }
    print_int(frac_int);
}

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0, printed = 0;
    char *str;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
        {
            if (printed)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (format[i] == 'c')
                _putchar(va_arg(args, int));
            if (format[i] == 'i')
                print_int(va_arg(args, int));
            if (format[i] == 'f')
                print_float(va_arg(args, double));
            if (format[i] == 's')
            {
                str = va_arg(args, char *);
                print_str(str);
            }

            printed = 1;
        }
        i++;
    }

    va_end(args);
    _putchar('\n');
}
