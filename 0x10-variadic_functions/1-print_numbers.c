#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_numbers - prnts no
  *@separator: seperator for each num
  *@n: no of args to print
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int deci;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		deci = va_arg(ap, int);
		printf("%d", deci);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
