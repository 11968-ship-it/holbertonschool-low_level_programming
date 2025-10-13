#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added (starts at 0)
 * @n: data to store in the new node
 *
 * Return: address of the new node, or NULL if it failed or idx is out
 * of range
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int i;
if (h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
temp = *h;
i = 0;
while (temp != NULL && i < idx)
{
temp = temp->next;
i++;
}
if (temp == NULL && i == idx)
return (add_dnodeint_end(h, n));
if (temp != NULL && i == idx)
{
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = temp->prev;
new_node->next = temp;
if (temp->prev != NULL)
temp->prev->next = new_node;
temp->prev = new_node;
if (idx == 0)
*h = new_node;
return (new_node);
}
return (NULL);
}
