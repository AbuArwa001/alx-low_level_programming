#include "main.h"
#include <stdbool.h>
#include <stddef.h>

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: returns an int for string converted
 */
int _atoi(char *s)
{
    unsigned int result = 0;
    bool neg = false;

    if (s == NULL)
        return (0);
    while (*s && (*s < '0' || *s > '9'))
    {
        if (*s == '-')
            neg = !neg;
        s++;
    }
    while (*s && (*s >= '0' && *s <= '9'))
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return (neg ? -result : result);
}
