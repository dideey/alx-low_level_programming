#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - search an item using the key and return value
 * @ht:the hash table being searched through
 * @key: the key we are using to search
 * Return: Null or value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

unsigned long int i = (hash_djb2((const unsigned char *)key) % (ht->size));

hash_node_t *item = ht->array[i];

if (!ht || !key)
{
	return (NULL);
}


if (item != NULL)
{
	if (strcmp(item->key, key) == 0)
		return (item->value);
}

return (NULL);
}
