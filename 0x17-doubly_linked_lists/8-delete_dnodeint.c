#include "lists.h"

/**
  *delete_dnodeint_at_index - deletes node at index
  *@head: head
  *@index: idx of node
  *Return: 1 as sucess else -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (!(*head))
		return (-1);

	tmp = *head;
	for (i = 0; tmp && i < index; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	return (del_node(head, tmp));
}

/**
  *del_node - deletes node
  *@head: head of list
  *@node: node to be deleted
  *Return: 1 as success else -1
  */
int del_node(dlistint_t **head, dlistint_t *node)
{
	if (*head == NULL || node == NULL)
		return (-1);
	if (*head == node)
		*head = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	if (node->prev != NULL)
		node->prev->next = node->next;
	free(node);
	return (1);
}
