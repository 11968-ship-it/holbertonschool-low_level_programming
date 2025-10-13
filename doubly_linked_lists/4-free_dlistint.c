#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the list to be freed
 *
 * Description: Traverses the list, frees each node to prevent memory leaks.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
