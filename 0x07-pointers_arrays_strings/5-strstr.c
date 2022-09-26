#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
  *compare -checks if 2 str are same
  *@X: first
  *@Y: seconf
  *Return: 0 as false
  */
int compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

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
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
