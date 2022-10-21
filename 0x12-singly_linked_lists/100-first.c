#include "lists.h"

/**
  *before- prints before main function
  */
void before(void) __attribute__((constructor));
void before(void)
{
	char *m;

	m = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", m);
}
