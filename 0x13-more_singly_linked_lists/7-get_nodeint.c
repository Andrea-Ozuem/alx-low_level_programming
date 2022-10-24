#include "lists.h"

/**
  *get_nodeint_at_index - return nth node of list
  *@head: list
  *@index: index to return
  *Return: node at index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (check == index)
			return (head);
		check++;
		head = head->next;
	}
	return (node);
}
