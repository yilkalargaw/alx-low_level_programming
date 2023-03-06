#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: set of bytes
 *
 * Return: the location as char
 */


char *_strpbrk(char *s, char *accept)
{
    int table[256] = {0};
    char *p = accept;
    for (; *p; p++)
        table[(unsigned char)*p] = 1;

    p = s;

    for (; *p; p++)
    {
        if (table[(unsigned char)*p])
            return p;
        p++;
    }

    return (0);
}
