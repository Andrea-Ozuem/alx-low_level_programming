#include "main.h"
#include <stddef.h>

/**
  *_strchr - looks for char in string
  *@s: str to br searched
  *@c: char looked for
  *Return: pointer to c
  */
char *_strchr(char *s, char c)
{
	while (*s != c && *s == '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
