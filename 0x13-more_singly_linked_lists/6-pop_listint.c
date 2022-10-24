#include "lists.h"

/**
  *pop_listint - deletes head of list
  *@head: head of list
  *Return: data n of deleted head
  */
int pop_listint(listint_t **head)
{
	listint_t *h, *cur;
	int head_n;

	if (*head == NULL)
		return (0);
	h = *head;
	head_n = (*head)->n;
	cur = (*head)->next;
	free(h);
	*head = cur;
	return (head_n);
}
