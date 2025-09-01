#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * without using char type, using only putchar twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(48 + i); // 48 is ASCII code for '0'
i++;
}
putchar('\n');
return (0);
}
