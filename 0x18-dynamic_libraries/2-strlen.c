#include "main.h"

/**
*_strlen - lengh of a string funciton
*@s: string to findlenght
*Return: str lenght til \0
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
