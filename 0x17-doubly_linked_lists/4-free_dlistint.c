#include "lists.h"

/**
  *free_dlistint - frees a dlist
  *@head: head of list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *cur;

	if (head != NULL)
	{
		tmp = head;
		cur = tmp->next;
		while (cur)
		{
			free(tmp);
			tmp = cur;
			cur = cur->next;
		}
		free(tmp);
	}
}
