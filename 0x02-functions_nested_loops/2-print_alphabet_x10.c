#include "main.h"

/**
*print_alphabet - print alphabet
*/
void print_alphabet(void)
{
	char c;
	int i;
	
	c = 'a';
	i = 0;
	while (i < 10)
	{
		while (c < 123)
		{
			_putchar(c);
			c++;
		}
	_putchar(10);
	}
}
