#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * Description: The function swaps the elements of the array such that the first
 * element becomes the last, the second becomes the second-to-last
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
