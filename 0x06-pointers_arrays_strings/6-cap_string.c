#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalises first lwtter of every qword
 * @s: sentence
 * Return: str
 */
char *cap_string(char *s)
{
	int i, j;
	char arr[] = {' ', '\t', ',', '\n', ';', '.', '!', '?', '"', '(', ')', '{',
		'}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == arr[j])
			{
				++i;
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
					break;
				}
			}
		}
	}
	return (s);
}
