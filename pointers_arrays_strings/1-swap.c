#include "main.h"

/**
* swap_int - A function to swaps the values of two integers
* @a: Pointer to the first integer
* @b: Pointer to the second integer
* Description: Swaps two integer pointers values they point to
*/
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
