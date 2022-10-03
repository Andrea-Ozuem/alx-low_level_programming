#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  *str_concat - concatenates 2 str
  *@s1: str
  *@s2: str
  *Return: pointer to concatenated str
  */
char *str_concat(char *s1, char *s2)
{
	int i;
	int slen;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	slen = len(s1) + len(s2) + 1;

	s = malloc(sizeof(char) * slen);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		s[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		s[i] = *s2;
		i++;
		s2++;
	}
	return (s);
}

/**
  *len - gets len of a str
  *@s: str
  *Return: lenght
  */
int len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
