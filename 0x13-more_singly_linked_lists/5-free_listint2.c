#include "lists.h"

/**
  *free_listint2 - frees a list and sets head to null
  *@head: list head
  */
void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
		return;
	while (*head)
	{
		fr = *head;
		*head = fr->next;
		free(fr);
	}
	*head = NULL;
}
