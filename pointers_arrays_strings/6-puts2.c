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
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
