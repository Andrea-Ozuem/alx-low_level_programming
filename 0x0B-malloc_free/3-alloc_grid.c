#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid - creates 2d array
  *@width: col
  *@height: row
  *Return: pointer to 2d array
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (n = 0; n < height; n++)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
