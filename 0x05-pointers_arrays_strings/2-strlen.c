#include "main.h"

/**
*_strlen - lengh of a string funciton
*@s: string to findlenght
*Return: str lenght til \0
*/
int _strlen(char *s)
{
    int count, i;

    count = 0;
    i = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    return (count);
}