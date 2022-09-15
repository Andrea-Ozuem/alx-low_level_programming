#include "main.h"

/**
 * print_number - print a number
 * @n: no to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n);
	_putchar(n % 10 + '0');
}
