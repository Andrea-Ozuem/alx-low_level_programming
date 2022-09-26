#include "main.h"
#include <stddef.h>

/**
  *_strpbrk - locaes first occurenceof any accept in s
  *@s: str
  *@accept: bytes to look for
  *Return: pointer to first occerence
  */
char *_strpbrk(char *s, char *accept)
{
	char *i;

	while (*s != '\0')
	{
		for (i = accept; *i != '\0'; i++)
		{
			if (*s == *i)
				return (s);
		}
		s++;
	}
	return (NULL);
}
