#include "main.h"

/**
  *_strcpy - copose str1 to str2
  *@dest: destination str
  *@src: src sting
  */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
		return NULL;
	int len;
	char *ptr = dest;
	while (src[len] != '\0')
		len++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
