#include "main.h"
/**
* _puts_rev_recursion - A function that prints a string in reverse
* @s: A pointer to a character
* Description: The function prints a string in reverse
* Return:
*
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
