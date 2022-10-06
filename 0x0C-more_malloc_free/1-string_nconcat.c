#include "main.h"
#include <stdlib.h>

/**
   *string_nconcat - concatenates 2 strings
   *@s1: str
   *@s2: str
   *@n: no of bytes to copy from st2
   *Return: pointer to new str
   */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= (unsigned int) str_len(s2))
		n = str_len(s2);
	len = str_len(s1) + n + 1;

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		s[i] = *s1;
		i++;
		s1++;
	}

	j = 0;
	while (j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}



/**
 *str_len - gets len of a str
 *@s: str
 *Return: lenght
 */
int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
