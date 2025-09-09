#include "main.h"

/**
 * print_diagsums - Function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: Pointer to the first element of the square matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
int i;
int sum_main = 0;
int sum_anti = 0;
for (i = 0; i < size; i++) {
sum_main += *((a + i * size) + i);
sum_anti += *((a + i * size) + (size - 1 - i));
}
int total = sum_main + sum_anti;
*a = total;
}
}
