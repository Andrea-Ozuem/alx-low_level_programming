#include <stdio.h>

/**
*main - entry
*Return: non-zero indicates false
*/

int main(void)
{
	char i;

	i = 'z';
	for (; i > 96; i--)
		putchar(i);
	putchar(10);
	return (0);
}
