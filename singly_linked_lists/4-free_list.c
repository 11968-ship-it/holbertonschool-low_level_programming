#include <stdlib.h>
/*for malloc, free*/
#include <string.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the first node of the list.
 */
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
