#include "main.h"

/**
  *_strcpy - copose str1 to str2
  *@dest: destination str
  *@src: src sting
  */
char *_strcpy(char *dest, char *src)
{
	int i, n, len;
	
	while (src[len] != '\0')
		len++;
	for (i = 0, n = len + 1; i < n; i++)
		dest[i] = src[i];
	return (&dest);
}
