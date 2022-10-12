#include "function_pointers.h"

/**
  *array_iterator - iterates over an array and performs an action
  *@array: array to be iterated
  *@size: size of arraty
  *@action: function to be performed
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
