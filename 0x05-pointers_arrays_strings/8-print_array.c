#include "main.h"
#include <stdio.h>

/**
  *print_array - print array
  *@a: array
  *@n: no of wlwments
  */
void print_array(int *a, int n)
{
	int i;
	
	if (n <= 0)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%i\n", a[i]);
			break;
		}
		printf("%i, ", a[i]);
	}
}
