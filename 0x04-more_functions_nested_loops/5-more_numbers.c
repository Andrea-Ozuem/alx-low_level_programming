#include "main.h"

/**
 *more_numbers - print num from 0-9
 */
void more_numbers(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				continue;
			}
			_putchar(i + '0');
		}
		_putchar(10);
	}
}
