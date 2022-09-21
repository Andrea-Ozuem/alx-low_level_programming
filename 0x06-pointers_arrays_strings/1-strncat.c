#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: dest str
 * @src: str to be adde
 * @n: no of bytes to be catnetedd
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	j = 0;
	while (dest[j] != '\0')
		j++;
	k = 0;
	while (src[k] != '\0')
		k++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
