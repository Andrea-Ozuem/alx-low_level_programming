#include "main.h"

/**
  *puts_half - puts half of a str
  *@str: string
  */
void puts_half(char *str)
{
	int i, n, j, k;

	i = 0;
	while (str[i] != '\0')
		i++;
	n = i / 2;
	if (i % 2 != 0)
	{
		for (j = n + 1; j < n + n + 1; j++)
			_putchar(str[j]);
	}
	else
	{
		for (k = n; k < n + n; k++)
			_putchar(str[k]);
	}
	_putchar('\n');
}
