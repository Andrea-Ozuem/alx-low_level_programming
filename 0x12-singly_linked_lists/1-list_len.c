#include "lists.h"
#include <stdlib.h>

/**
*list_len - print all element in a linked list
*@h: list head
*Return: no of elements in list
*/
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp)
	{
		for (tmp = h, i = 0; tmp != NULL; tmp = tmp->next)
			i++;
	}
	return (i);
}
