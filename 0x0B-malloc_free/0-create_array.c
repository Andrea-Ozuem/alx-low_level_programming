#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates array
  *@size: siz of array
  *@c: char
  *Return: pointer to ara
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	for(i = 0; i < size; i++)
		s[i] = c;
	s[i] = '\0';
	return (s);
}
