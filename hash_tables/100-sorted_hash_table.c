#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: size of the array
 * Return: pointer to new table, or NULL on error
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (!ht)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (!ht->array)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * make_shash_node - Allocates and initializes a new shash_node_t.
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
    shash_node_t *node = malloc(sizeof(shash_node_t));

    if (!node)
        return (NULL);

    node->key = strdup(key);
    node->value = strdup(value);
    node->next = NULL;
    node->sprev = NULL;
    node->snext = NULL;
    return (node);
}

/**
 * insert_sorted_list - Inserts node into sorted doubly linked list.
 */
void insert_sorted_list(shash_table_t *ht, shash_node_t *new)
{
    shash_node_t *tmp;

    if (ht->shead == NULL)
    {
        ht->shead = ht->stail = new;
        return;
    }

    tmp = ht->shead;
    while (tmp)
    {
        if (strcmp(new->key, tmp->key) < 0)
        {
            new->snext = tmp;
            new->sprev = tmp->sprev;
            tmp->sprev = new;
            if (new->sprev)
                new->sprev->snext = new;
            else
                ht->shead = new;
            return;
        }
        tmp = tmp->snext;
    }
    /* Insert at end */
    new->sprev = ht->stail;
    ht->stail->snext = new;
    ht->stail = new;
}

/**
 * shash_table_set - Adds or updates a key/value to the sorted hash table.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *node, *tmp;

    if (!ht || !key || !*key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];

    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            return (1);
        }
        tmp = tmp->next;
    }

    node = make_shash_node(key, value);
    if (!node)
        return (0);

    node->next = ht->array[index];
    ht->array[index] = node;

    insert_sorted_list(ht, node);
    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (!ht || !key || !*key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->next;
    }
    return (NULL);
}

/**
 * shash_table_print - Prints hash table using sorted linked list.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    int comma = 0;

    if (!ht)
        return;

    printf("{");
    node = ht->shead;
    while (node)
    {
        if (comma)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        comma = 1;
        node = node->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints hash table in reverse sorted order.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;
    int comma = 0;

    if (!ht)
        return;

    printf("{");
    node = ht->stail;
    while (node)
    {
        if (comma)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        comma = 1;
        node = node->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *node, *tmp;

    if (!ht)
        return;

    node = ht->shead;
    while (node)
    {
        tmp = node->snext;
        free(node->key);
        free(node->value);
        free(node);
        node = tmp;
    }
    free(ht->array);
    free(ht);
}
