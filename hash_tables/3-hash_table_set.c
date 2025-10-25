#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key (cannot be empty)
 * @value: The value (must be duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node, *new_node;
if (!ht || !key || !*key || !value)
return (0);
index = key_index((unsigned char *)key, ht->size);
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = strdup(value);
return (1);
}
node = node->next;
}
new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
if (!new_node->key || !new_node->value)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (0);
}
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}

