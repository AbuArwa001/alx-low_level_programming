#include "main.h"

/**
 * cap_string - Capitalize the first letter of each word in a string
 * @str: The input string
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
    int i = 0;


    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    while (str[i] != '\0')
    {

        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
        {

            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] -= 32;
        }

        i++;
    }

    return (str);
}
