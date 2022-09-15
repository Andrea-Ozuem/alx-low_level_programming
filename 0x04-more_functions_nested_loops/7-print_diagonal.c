#include "main.h"

/**
 * print_line - print - n times
 * @n: no of times - should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar(10);
			break;
		}
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	_putchar(10);
}
