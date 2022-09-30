#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints nameof executable
  *@argc: arg count
  *@argv: agu vecto
  *Return: 0 to indicate success
  */
int main(int argc, char *argv[])
{
	int i;
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	product = 1;
	for (i = 1; i < argc; i++)
		product *= atoi(argv[i]);
	printf("%d\n", product);
	return (0);
}
