#include <stdio.h>

/**
*main - entry
*Return: non-zero indicates false
*/

int main(void)
{
	char i;

	i = 'a';
	for (; i < 123; i++)
		putchar(i);
	putchar(10);
	return (0);
}
