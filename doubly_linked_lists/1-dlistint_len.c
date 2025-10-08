#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
/*to intialize count to 0*/
size_t count = 0;
/*to loop until the end of the list */
while (h != NULL)
{
/*count current node*/
count++;
h = h->next;
}
return (count);
}
