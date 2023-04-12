#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "search_algos.h"

/**
  *jump_search - searches for a value in a sorted array of integers using
  *the Jump search algorithm
  *@array: array size
  *@size: size
  *@value: searched for
  *Return: idx of value else -1
  */
int jump_search(int *array, size_t size, int value)
{
	int a, b, asize, root;

	asize = (int) size;
	a = 0;
	root = (int) sqrt((double) abs(asize));
	b = root;
	if (array == NULL)
		return (-1);

	printf("Value checked array[%i] = [%i]\n", a, array[a]);
	/* Checks which block/set value falls within */
	while (array[min(b, asize)] < value)
	{
		a = b;
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		b += root;
		if (a + root > asize)
			break;
	}
	/* vlaue falls within */
	printf("Value found between indexes [%i] and [%i]\n", a, b);

	/* If within block [a, b], loop through till value*/
	while (array[a] < value && a < asize)
	{
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		a++;
		if (a == min(b, asize) + 1)
			return (-1);
	}
	if (array[a] == value)
	{
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		return (a);
	}
	return (-1);
}

/**
  *min - min of 2 ints
  *@a: int 1
  *@b: int 2
  *Return: min of the 2
  */
int min(int a, int b)
{
	if (b > a)
		return (a);
	return (b);
}
