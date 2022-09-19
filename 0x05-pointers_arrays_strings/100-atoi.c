#include "main.h"

/**
  *_atoi - converts str to in
 * @s: str to convert
  *Return: int
  */
int _atoi(char *s)
{
	int res;

	res = 0;
	for (int i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return (res);
}
