#include "hash_tables.h"
#include <string.h>

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
  *create_node - creates new node for ht
  *@key: key
  *@value: value of key i.e key: value
  *Return: node created
  */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (strlen(key) < 1)
		return (NULL);
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}

/**
  *hash_table_set - adds an element to the hash table
  *@ht: Hash table
  *@key: key
  *@value: Value associated with key
  *Return: 1 if successful else 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *node, *head;

	if (ht == NULL)
		return (0);

	node = create_node(key, value);
	if (node == NULL)
		return (0);
	idx = key_index((unsigned char *) key, ht->size);
	head = ht->array[idx];
	if (head == NULL)
	{
		ht->array[idx] = node;
		return (1);
	}
	else
	{
		while (head != NULL)
		{
			if (strcmp(key, head->key) == 0)
			{
				if (strlen(head->value) < strlen(value))
					head->value = realloc(head->value, strlen(value) + 1);
				strcpy(head->value, value);
				free_node(node);
				return (1);
			}
			head = head->next;
		}
		node->next = ht->array[idx];
		ht->array[idx] = node;
		return (1);
	}
	return (0);
}
