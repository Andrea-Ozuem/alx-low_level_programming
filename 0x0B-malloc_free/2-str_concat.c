#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  *str_concat - concatenates 2 str
  *@s1: str
  *@s2: str
  *Return: pointer to concatenated str
  */
char *str_concat(char *s1, char *s2)
{
	int i, n;
	char *s;

	s = malloc(strlen(s1) + strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0, n = len(s1); i < n; i++)
	{
		s[i] = s1[i];
	}
	while (*s2 != '\0')
	{
		s[i] = s2[i];
		i++;
	}
	_putchar('\n');
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

	while (*s != 0)
	{
		i++;
		s++;
	}
	return (i);
}
