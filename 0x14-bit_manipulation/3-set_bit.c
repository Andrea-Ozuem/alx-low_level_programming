#include "main.h"

/**
  *set_bit - set value of a bit to one at a given index
  *n: where bits are
  *@index: whee bit is licated
  *Return: 1 if successful
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}

	return (-1);
}
