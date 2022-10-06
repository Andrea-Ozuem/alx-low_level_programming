#include "main.h"
#include <stdlib.h>

/**
  *_calloc - implementation of calloc using malloc
  *@nmemb: no of items
  *@size: size of each item
  *Return: pointer to arr
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
