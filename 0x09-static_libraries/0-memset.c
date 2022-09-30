#include "main.h"

/**
  *_memset - copes bytes toa buffer
  *@s: buffer
  *@b: bytes to be copies
  *@n: no of bytes to be copied
  *Return: pointer to buffer
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p = (char) b;
		p++;
	}
	return (s);
}
