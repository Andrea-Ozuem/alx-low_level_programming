#include "main.h"

/**
 * leet - decode
 * @s: plain text
 * Return: encoded text
 */
char *leet(char *s)
{
	int i, j;

	char cipher[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char key[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == cipher[j])
			{
				s[i] = key[j / 2];
				break;
			}
		}
	}
	return (s);
}
