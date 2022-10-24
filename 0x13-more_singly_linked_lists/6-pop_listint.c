#include "lists.h"

/**
  *pop_listint - deletes head of list
  *@head: head of list
  *Return: data n of deleted head
  */
int pop_listint(listint_t **head)
{
	listint_t *new_h;
	int head_n;

	if (!*head)
		return (0);
	new_h = *head;
	head_n = (*head)->n;
	*head = (*head)->next;
	free(new_h);
	return (head_n);
}
