#include "lists.h"
#include <string.h>

/**
*add_nodeint - add new node to beginning of list
*@head: list head
*@n: new node int val
*Return: address of new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
