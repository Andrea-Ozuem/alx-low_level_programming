#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - prints nameof executable
  *@argc: arg count
  *@argv: agu vecto
  *Return: 0 to indicate success
  */
int main(int argc, char *argv[])
{
	int i, j, n;
	int sum;

	sum = 0;
	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	/*for each arg */
	for (i = 1; i < argc; i++)
	{
		/* for each char */
		for (j = 0, n = strlen(argv[i]); j < n; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
