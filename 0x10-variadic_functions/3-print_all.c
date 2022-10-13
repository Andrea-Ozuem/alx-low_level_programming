#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_all - prints all args in a format (see printf)
  *@format: format to prnt
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j, n;
	char *s;
	char c;
	char *sep;

	sep = ", ";
	j = n = 0;
	va_start(ap, format);
	while (format && format[j])
		j++;
	while (format && format[n])
	{
		if (n == j - 1)
			sep = "";
		switch (format[n])
		{
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", s, sep);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d%s", i, sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), sep);
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c%s", c, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(ap);
}
