#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  *main - entry point
  *@argc: arg count
  *@argv: command line argument arrm
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0 || strcmp(argv[2],
				"*") == 0 || strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", get_op_func(argv[2])(num1, num2));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
}
