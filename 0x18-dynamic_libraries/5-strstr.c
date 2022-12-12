#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
  *_strstr - locates substring in str
  *@haystack: str
  *@needle: substring
  *Return: pointer to beginning of located str
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
