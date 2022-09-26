#include "main.h"

/**
  *_strchr - looks for char in string
  *@s: str to br searched
  *@c: char looked for
  *Return: pointer to c
  */
char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;
	if (*s == c)
		return (s);
	return NULL;
