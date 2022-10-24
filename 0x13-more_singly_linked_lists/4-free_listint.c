#include "lists.h"

/**
  *free_listint - frees list
  *@head: list head
  */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	tmp = head->next;
	free_listint(tmp);
	free(head);
}
