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
	char *p;
	char *str;

	printf("ok");
	p = needle;
	str = haystack;
	printf("starting");
	while (*p != '\0')
	{
		if (*str != *p)
			return (NULL);
		str++;
		p++;
		printf("%c\n", *str);
	}
	return (p);
}
