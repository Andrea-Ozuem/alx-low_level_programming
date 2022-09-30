#include "main.h"

/**
 * _strcmp - compares 2 str
 * @s1: first str
 * @s2: second str
 * Return: to indicate if same(0) or not
 */
int _strcmp(char *s1, char *s2)
{
	int i, val, ints, ints2;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		ints = (int) s1[i];
		ints2 = (int) s2[i];

		if (ints == ints2)
		{
			val = 0;
			continue;
		}
		else
		{
			if (ints < ints2)
			{
				val = ints - ints2;
				break;
			}
			else
			{
				val = ints - ints2;
				break;
			}
		}
	}
	return (val);
}
