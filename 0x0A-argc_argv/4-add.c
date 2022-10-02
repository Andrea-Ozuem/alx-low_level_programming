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
	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
