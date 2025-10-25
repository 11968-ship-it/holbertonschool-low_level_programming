#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
/*check if size = 0*/
if (size == 0)
return (NULL);
table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);
table->size =  size;
table->array = malloc(sizeof(hash_node_t *) * size);
if (table->array == NULL)
{
free (table);
return (NULL);
}
unsigned long int i;
for (i = 0; i < size; i++)
table->array[i] = NULL;
return (table);
}
