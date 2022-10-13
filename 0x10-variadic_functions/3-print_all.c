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
	int i;
	char c;
	char *s;
	float f;
	const char *fmt;

	va_start(ap, format);
	fmt = format;
	while (*fmt)
	{
		switch (*fmt++)
		{
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s, ", s);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f, ", f);
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c, ", c);
				break;
		}
	}
	printf("\n");
	va_end(ap);
}
