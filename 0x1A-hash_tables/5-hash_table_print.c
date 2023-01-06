#include "hash_tables.h"

/**
  *hash_table_print - prints a hash table
  *@ht: hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag;
	hash_node_t *curr;

	flag = i = 0;
	putchar('{');
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", curr->key, curr->value);
				flag = 1;
				curr = curr->next;
			}
		}
		i++;
	}
	printf("}\n");
}
