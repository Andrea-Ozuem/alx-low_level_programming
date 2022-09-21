#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 * @dest: dest str
 * @src: str to be added
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;
	
	j = 0;
	while (dest[j] != '\0')
		j++;
	k = 0;
	while (src[k] != '\0')
		k++;
	for (i = 0; i <= k; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
