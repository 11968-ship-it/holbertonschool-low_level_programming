#include <stdlib.h>
/*malloc, free*/
#include <string.h>
/*strdup*/
#include "lists.h"

/**
 * _strlen - calculates the length of a string
 * @s: input string
 *
 * Return: length of the string (unsigned int)
 */
unsigned int _strlen(const char *s)
{
unsigned int len = 0;
while (s[len] != '\0')
len++;
return (len);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to duplicate and add in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
