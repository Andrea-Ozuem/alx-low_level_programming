#include "main.h"

/**
  *set_bit - set value of a bit to one at a given index
  *@n: where bits are
  *@index: whee bit is licated
  *Return: 1 if successful
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | 1 << index;
		return (1);
	}
}
