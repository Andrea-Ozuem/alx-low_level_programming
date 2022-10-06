#include "main.h"
#include <stdlib.h>

/**
  *array_range - creates array of integers
  *@min: startngpont of int
  *@max: last elements of array
  *Return: pointer to array
  */
int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
