#include "lists.h"

/**
  *sum_listint - sum all data(n) of list
  *@head: list
  *Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	sum = 0;
	for (tmp = head; tmp != NULL; tmp = tmp->next)
		sum += tmp->n;
	return (sum);
}
