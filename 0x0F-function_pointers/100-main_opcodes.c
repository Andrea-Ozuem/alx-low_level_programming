#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *@argc: arg count
  *@argv: argment vecto
  *Return: 0 always
  */
int main(int argc, char *argv[])
{
	int code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	code = atoi(argv[1]);
	if (code < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
