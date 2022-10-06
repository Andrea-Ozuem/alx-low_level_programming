#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - allocates memory using malloc and checks for NULL
  *@b: no of bytes
  */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	else
		return (mem);
}
