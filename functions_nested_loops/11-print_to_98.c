#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98,
 *               followed by a new line.
 * @n: The starting integer to begin counting from.
 *
 * Description: Numbers are printed in order, ascending if n < 98,
 *              or descending if n > 98. Numbers are separated by
 *              a comma and space, except the last number which is
 *              followed only by a newline.
 *
 * Return: void
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
else
{
for (; n >= 98; n--)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
}
