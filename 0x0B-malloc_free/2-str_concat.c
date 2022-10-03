#include "main.h"
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
	char *s;

	s = malloc(sizeof(s1) + sizeof(s2));
	if (s == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (*s1 != '\0')
	{
		s[i] = *s1;	
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		s[i] = *s2;
		s2++;
		i++;
	}
	return (s);
}
