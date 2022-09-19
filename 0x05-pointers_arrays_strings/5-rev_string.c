#include "main.h"

/**
  *rev_string - reverse a string
  *@s: str
  */
void rev_string(char *s)
{
	int j, tmp, i;

	i = 0;
	while (i != '\0')
		i++;
	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = tmp;
	}
}
