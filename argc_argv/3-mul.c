#include <stdio.h>
#include "main.h"
/**
* main - Multiplies two numbers passed as arguments
* @argc: Arrguments count
* @argv: Arrguments vector
*
* Return: 0 if success, 1 on error
*/

int main(int argc, char *argv[])
{
int num1, num2, result;
for (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
