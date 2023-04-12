#include <stddef.h>
#include "search_algos.h"
#include <stdio.h>

/**
  *linear_search - searches for a value in an array of integers using
  *the Linear search algorithm
  *@size: of array
  *@value: to search
  *@array: array to search
  *Return: first index where value is located else -1
  */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
