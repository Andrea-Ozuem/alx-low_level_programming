#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - sums all arguments to function
  *@n: no of arg passed
  *Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int result;

	if (n == 0)
		return (0);
	result = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		result += va_arg(ap, int);
	va_end(ap);
	return (result);
}
