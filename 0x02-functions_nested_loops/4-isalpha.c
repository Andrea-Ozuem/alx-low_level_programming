#include "main.h"

/**
*_isaplpha - checks if c is an alphabet
* @c: ot be checked
*Return: 1 if true
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
