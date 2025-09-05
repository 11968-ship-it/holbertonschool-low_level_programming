#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string to be printed
 *
 * Description: Calculates the length of the string then prints
 * each character in reverse order
 */
void print_rev(char *s)
{
int len = 0;
int i;
while (s[len] != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
