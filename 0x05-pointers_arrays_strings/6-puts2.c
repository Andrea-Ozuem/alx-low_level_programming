#include "main.h"

/**
  *puts - prints every other char in s
  *@str: string
  */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < (i / 2) + 1; j++)
	{
		_putchar(str[i]);
		j = j + 2;
	}
	_putchar('\n');
}
