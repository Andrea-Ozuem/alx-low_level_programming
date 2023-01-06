#include "hash_tables.h"
#include <string.h>

/**
  *hash_table_get - retrieves a value associated with a key.
  *@ht: hash table
  *@key: key you're looking for
  *Return: the value associated with key else NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *item;

	if (key == NULL)
		return (NULL);
	idx = key_index((unsigned char *) key, ht->size);
	item = ht->array[idx];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
