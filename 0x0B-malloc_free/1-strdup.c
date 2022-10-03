#include "main.h"
#include <stdlib.h>

/**
  *_strdup - copies a str
  *@str: s
  *Return: pointer
  */
char *_strdup(char *str)
{
	int i, n;
	char *s;

	if (str == NULL)
		return (NULL);
	s = malloc(len(str) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0, n = len(str); i < n; i++)
		s[i] = str[i];
	return (s);
}

/**
  *len - lengh f a str
  *@s: str
  *Return: int
  */
int len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
