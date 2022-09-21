#include "main.h"

/**
 * print - print more than 1 digit no
 * @n: digit to be printed
 */
void print(int n)
{
	if (n / 10)
		print (n / 10);
	_putchar(n % 10 + '0');
}

/**
 * reverse_array - prints array in reverse
 * @a: array
 * @n: no of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		print(a[i]);
		i--;
	}
	_putchar('\n');
}
