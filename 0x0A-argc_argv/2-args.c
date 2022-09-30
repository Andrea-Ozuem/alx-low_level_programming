#include "main.h"
#include <stdio.h>

/**
  *main - prints nameof executable
  *@argc: arg count
  *@argv: agu vecto
  *Return: 0 to indicate success
  */
int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
