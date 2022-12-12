#include "main.h"

/**
  *_strcpy - copose str1 to str2
  *@dest: destination str
  *@src: src sting
  *Return: pointer to str
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
