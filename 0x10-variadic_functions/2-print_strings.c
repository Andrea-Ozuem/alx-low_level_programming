#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_strings - prnts no
  *@separator: seperator for each num
  *@n: no of args to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);
	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (i == n - 1)
		{
			if (s == NULL)
				printf("(nil)\n");
			else
				printf("%s\n", s);
		}
		else
		{
			if (s == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", s, separator);
		}
	}
	va_end(ap);
}
