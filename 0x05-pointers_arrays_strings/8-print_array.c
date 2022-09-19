#include "main.h"
#include <stdio.h>

/**
  *print_arrat - print array
  *@a: array
  *@n: no of wlwments
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%i\n", a[i]);
		else
			printf("%i, ", a[i]);
	}
}
