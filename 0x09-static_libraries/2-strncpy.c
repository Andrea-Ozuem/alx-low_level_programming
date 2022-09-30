#include "main.h"

/**
 * _strncpy - cpies src to dest
 * @dest: dest str
 * @src: src str
 * @n: no of bytes
 * Return: pinter to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
