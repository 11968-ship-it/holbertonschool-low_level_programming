#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Calls a function to print a name
 * @name: The name to print
 * @f: A pointer to the function to use to print the name
 *
 * Description: This function takes a name and a function pointer
 * as arguments. If neither is NULL, it calls the function
 * passing the name as its argument.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
