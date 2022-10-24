#include "lists.h"

/**
  *get_nodeint_at_index - return nth node of list
  *@head: list
  *@index: index to return
  *Return: node at index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	i = 0;
	for (node = head; i != index; i++, node = node->next)
		;
	return (node);
}
