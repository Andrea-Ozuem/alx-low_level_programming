#include "lists.h"
#include <stdlib.h>

/**
*listint_len - print all element in a linked list
*@h: list head
*Return: no of elements in list
*/
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp)
	{
		for (tmp = h, i = 0; tmp != NULL; tmp = tmp->next)
			i++;
	}
	return (i);
}
