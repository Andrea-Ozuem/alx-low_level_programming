#include "main.h"

/**
 *_isupper - checks if a char is uppercase
 *@c: char to be checked
 *Return: 1 as true else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 70)
		return (1);
	else
		return (0);
}
