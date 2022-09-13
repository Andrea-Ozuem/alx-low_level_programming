#include "main.h"

/**
 *print_sign - print if nint is sign
 *@n: num t check
 *Return: 1 as +, 0 as non
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
        else
        {
		_putchar('0');
		return (0);
	}
}
