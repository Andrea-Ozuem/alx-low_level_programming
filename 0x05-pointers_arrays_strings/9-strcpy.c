#include "main.h"

/**
  *_strcpy - copose str1 to str2
  *@dest: destination str
  *@src: src sting
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
