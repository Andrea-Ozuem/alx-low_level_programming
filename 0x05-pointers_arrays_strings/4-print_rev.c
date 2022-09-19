#include "main.h"

/**
*print_rev - print str in reverse order
*@s: string
*/
void print_rev(char *s)
{
    int i, len;

    len = _strlen(s);
    for int(i = len - 1; i < 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}