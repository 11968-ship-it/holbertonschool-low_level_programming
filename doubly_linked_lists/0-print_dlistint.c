#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
/*to loop until the end of the list */
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
