#include "main.h"

/**
  *_strspn - looks for sequenc in string
  *@s: str to be searched
  *@accept: sequence
  *Return: no of bytes;
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	char *a;

	for (count = 0; *s; s++, count++)
	{
		for (a = accept; *a && *a != *s; a++)
			;
		if (!*a)
			break;
	}
	return (count);
}
