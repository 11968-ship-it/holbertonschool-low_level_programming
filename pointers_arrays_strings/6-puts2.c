#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting
 * with the first character.
 * @str: The string to print characters from.
 *
 * Description: Prints characters at even indexes (0, 2, 4...)
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
