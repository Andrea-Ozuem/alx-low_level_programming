#include "main.h"

/**
  *puts - prints every other char in s
  *@str: string
  */
void puts2(char *str)
{
	int i,j;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i = i + 2;
	}
	_putchar('\n');
}
