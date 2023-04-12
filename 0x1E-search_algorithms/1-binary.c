#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
  *binary_search - searches for a value in a sorted array of integers using
  *the Binary search algorithm
  *@array: array to search
  *@size: size of arr
  *@value: vlaue we're looking fot
  *Return: idx of value in array else -1
  */
int binary_search(int *array, size_t size, int value)
{
	int i, arr_size, mid;

	i = 0;
	arr_size = (int) size - 1;
	if (array == NULL)
		return (-1);

	while (i <= arr_size)
	{
		print_arr(array, i, arr_size);
		mid = ((i + arr_size) / 2);
		if (array[mid] < value)
			i = mid + 1;
		else if (array[mid] > value)
			arr_size = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

/**
  *print_arr - prints an array
  *@array: array to print
  *@start: starting point of array to start printing
  *@end: point to stop printing
  */
void print_arr(int *array, int start, int end)
{
	int j, flag;

	printf("Searching in array: ");
	flag = 1;
	for (j = start; j <= end; j++)
	{
		if (j == end)
			flag = 0;
		if (flag == 0)
			printf("%i\n", array[j]);
		else
			printf("%i, ", array[j]);
	}
}
