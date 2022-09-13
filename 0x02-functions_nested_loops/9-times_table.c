#include "main.h"

/**
 *times_table - print times table
 */

void times_table(void)
{
	int i, j, d;

	for (i = 0; i < 9; i++)
	{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 0; j <= 9; j++)
			{
				d = i * j;
				if ((d / 10) > 0)
				{
					_putchar((d / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
			        _putchar((d % 10) + '0');
				
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
	}
}
