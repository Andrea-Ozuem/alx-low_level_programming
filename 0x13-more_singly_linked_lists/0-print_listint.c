#include "lists.h"

/**
  *print_listint - print all elements is a list
  *@h: list
  *Return: no of node
  */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		printf("Error\n");
		return (1);
	}
	for (tmp = h, i = 0; tmp != NULL; tmp = tmp->next, i++)
		printf("%i\n", tmp->n);
	return (i);
}
