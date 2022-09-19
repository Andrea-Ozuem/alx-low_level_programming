#include "main.h"

/**
*_strlen - lengh of a string funciton
*@s: string to findlenght
*Return: str lenght til \0
*/
int _strlen(char *s);
{
    int count;

    count = 0;
    while (s != '\0')
    {
        count++;
    }
    return (count);
}