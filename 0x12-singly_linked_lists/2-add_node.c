#include "lists.h"
#include <string.h>

/**
*add_node - add new node to beginning of list
*@head: list head
*@str: new node str val
*Return: address of new node
*/
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	n->str = strdup(str);
	n->len = i;
	n->next = *head;
	*head = n;

	return (*head);
}
