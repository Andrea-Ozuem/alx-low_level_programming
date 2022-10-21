#include "lists.h"
#include <stdlib.h>

/**
*print_list - print all element in a linked list
*@h: list head
*Return: no of elements in list
*/
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		printf("Error\n");
		return (1);
	}
	for (tmp = h, i = 0; tmp != NULL; tmp = tmp->next)
	{
		if (tmp->str)
			printf("[%d] %s\n", tmp->len, tmp->str);
		else
			printf("[%d] (nil)\n", tmp->len);
		i++;
	}
	return (i);
}
