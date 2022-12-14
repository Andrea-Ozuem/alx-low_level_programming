#include "lists.h"

/**
  *free_list - frees list
  *@head: list head
  */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}
	free(head);
}
