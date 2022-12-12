#include "main.h"

/**
  *_memcpy - copies n bytes from src todest
  *@dest: dest
  *@src: src buffer
  *@n: no of btes
  *Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
/*	char *s = src;*/

	while (n--)
	{
		*p = *src;
		src++;
		p++;
	}
	return (dest);
}
