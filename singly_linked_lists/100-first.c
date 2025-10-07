#include <stdio.h>
/**
 * print_message - prints a message before main is executed
 *
 * Description: This function is executed before main due to the
 * constructor attribute. It prints a fixed string.
 */
void print_message(void) __attribute__((constructor));
void print_message(void)
{
printf("You're beat! and yet, you must allow,\n I bore my house upon my back!\n");
}
