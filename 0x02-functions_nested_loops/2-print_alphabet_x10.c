#include "main.h"

/**
*print_alphabet - print alphabet
*/
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		i++;
	}
}
