#include "function_pointers.h"
/**
  *int_index - searches for an int
  *@size: size of ary
  *@array: array
  *@cmp: compare or checking function
  *Return: index of first element of which cmp returns non-zero
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < (int) size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
