#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 * each followed by a new line.
 *
 * Return: Nothing (void)
 */

void more_numbers(void)
{
int i = 0;
char c;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
