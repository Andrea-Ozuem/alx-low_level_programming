#include "main.h"
#include <stdio.h>
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
	int i;
	int sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("Sum: %d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
