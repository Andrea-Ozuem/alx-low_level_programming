#include "main.h"

/**
*print_alphabet - print alphabet
*/
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
