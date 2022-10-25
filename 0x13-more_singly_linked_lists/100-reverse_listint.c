#include "lists.h"

/**
  *reverse_listint - reverses a list
  *@head: list head
  *Return: pointer to new head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = next = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
