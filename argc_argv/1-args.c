#include <stdio.h>
#include "main.h"
/**
* main - Printsthe the number of arguments passed into it
* @argc: Arrguments count
* @argv: Arrguments vector
*
* Return: 0
*/

int main(int argc, char *argv[]  __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
