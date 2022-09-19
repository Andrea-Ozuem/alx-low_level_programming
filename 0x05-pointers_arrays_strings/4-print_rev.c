#include "main.h"

/**
*print_rev - print str in reverse order
*@s: string
*/
void print_rev(char *s)
{
    int i, j;
    char c;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    for (j = i - 1; j < 0; j--)
    {
        c = s[i];
        _putchar(c);
    }
    _putchar('\n');
}