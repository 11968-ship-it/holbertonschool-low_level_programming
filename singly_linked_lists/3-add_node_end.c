#include <stdlib.h>
/*for malloc, free*/
#include <string.h>
#include "lists.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The number of characters in the string.
 */
unsigned int _strlen(const char *s)
{
unsigned int len = 0;
while (s[len] != '\0')
len++;
return (len);
}
/**
 * _strdup - Duplicates a string by allocating new memory
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string,
 * or NULL if memory allocation fails.
 */
char *_strdup(const char *str)
{
unsigned int len = _strlen(str);
char *dup = malloc(len + 1);
unsigned int i;
if (dup == NULL)
return NULL;
for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';
return (dup);
}
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the head of the list.
 * @str: String to add to the new node.
 *
 * Description: Creates a new node containing a duplicate
 * of the string, then adds the node to the end of the list.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return NULL;
new_node->str = _strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}
return (new_node);
}
