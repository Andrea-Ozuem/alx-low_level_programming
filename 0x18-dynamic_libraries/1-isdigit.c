#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: no to be checked
 * Return: 1 as true
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
