#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * REturn: 1
 */
int main (void)
{
	int isPrime;
	
	long int num, i, j, result;
	num = 6128524475143;
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 1;
			for (j = 2; j <= i/2; j++)
			{
				if (i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}
			if (isPrime == 1)
				result = i;
		}
	}
	printf("%ld\n", result);
	return (0);
}
