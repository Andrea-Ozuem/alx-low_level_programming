#include "main.h"

/**
 *print_last_digit - print last digit
 *@n: int
 *Return: last num of int
 */
int print_last_digit(int n)
{
	int nld;
	
	nld = n % 10;
	if (nld < 0)
		nld = -1 * nld;
	_putchar(nld + '0');
	return (nld);
}
