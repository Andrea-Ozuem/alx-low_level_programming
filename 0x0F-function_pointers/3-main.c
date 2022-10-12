#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  *main - entry point
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*func_op) (int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0 || strcmp(argv[2], "*") == 0 || strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}

		func_op = get_op_func(argv[2]);
		printf("%d\n", func_op(num1, num2));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
}
