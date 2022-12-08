#include "lists.h"

/**
  *insert_dnodeint_at_index - inserts a new node at a given position.
  *@h: head
  *@idx: index of node to be added
  *@n: no to be added
  *Return: address of new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp, *new, *prev;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	for (i = 0, tmp = *h; tmp; i++)
	{
		if (i == idx)
		{
			prev = tmp->prev;
			new->n = n;
			new->next = tmp;
			new->prev = tmp->prev;
			prev->next = new;
			tmp->prev = new;
			return (new);
		}
		tmp = tmp->next;
	}
	if (idx == i)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
