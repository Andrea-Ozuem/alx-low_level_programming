#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, '\n');

	if (f != NULL)
        {
            printf("%s\n", f);
        }
       return (0);
}
