#include "lists.h"

/**
  *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  *@head: list head
  *@index: index of node to return
  *Return: node or NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	for (i = 0, tmp = head; tmp; i++)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
