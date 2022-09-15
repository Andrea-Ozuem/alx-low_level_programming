#include "main.h"

/**
 * print_line - print - n times
 * @n: no of times - should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar(10);
			break;
		}
		_putchar('_');
	}
	_putchar(10);
}
