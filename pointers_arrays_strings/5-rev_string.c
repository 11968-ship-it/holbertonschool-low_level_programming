#include "main.h"

/**
 * rev_string - Reverses a string in-place
 * @s: The string to be reversed
 *
 * Description: It reverses the characters in the given
 * string using a two-pointer approach without using extra memory.
 */
void rev_string(char *s)
{
int len = 0;
int i;
char temp;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
