#include <stdio.h>

/**
*main - entry
*Return: non-zero indicates false
*/

int main(void)
{
	char i;
	char I;

	i = 'a';
	I = 'A';
	for (; i < 123; i++)
		putchar(i);

	for (; I < 91; I++)
		putchar(I);
	putchar(10);
	return (0);
}
