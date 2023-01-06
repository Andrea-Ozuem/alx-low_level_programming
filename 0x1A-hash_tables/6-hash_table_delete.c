#include "hash_tables.h"

/**
  *free_node - frees a node
  *@node: node to be freed
  */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
  *hash_table_delete - fees a table
  *@ht: hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head, *node;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			node = head;
			head = head->next;
			free_node(node);
		}
	}
	free(ht->array);
	free(ht);
}
