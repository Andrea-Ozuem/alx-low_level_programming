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

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			printf("\n");
		else if (i == n - 1)
			printf("%i\n", a[i]);
		else if (i < n)
			printf("%i, ", a[i]);
	}
}
