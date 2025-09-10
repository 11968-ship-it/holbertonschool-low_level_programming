#include "main.h"
/**
* _puts_recursion - A function that prints a string
* @s: A pointer to a character
* Description: The function prints a string, followed by
* a new line
* Return:
*
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
