#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - Gives the index of a key in a hash table array
 * @key: The key string
 * @size: The size of the array
 *
 * Return: The index where the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
if (key == NULL || size == 0)
return (0);
hash = hash_djb2(key);
return (hash % size);
}
