#include "main.h"
#include "2-strlen.c"
#include "_putchar.c"

/**
 * print_number - prints integers using _putchar
 * @n: is the number to be printed
 */

char *convert_number(int n,int i,char *chara,int len)
{

    if (n < 0)
    {    chara[i] = '-';
        n = -n;
    }

    if (n / 10 != 0)
        convert_number((n / 10), i - 1, chara,len);
    if (i == 1)
        chara[len] = '\0';

    chara[i - 1] = (n % 10 + '0');
    return (chara);
}
int intLen(int n,int i)
{
    if (n / 10 != 0)
        return (intLen((n / 10), i+1));

   return (i);
}
char *output(int sum)
{
    char *sm =  NULL;
    char *chara = malloc(sizeof(char) * 3);


    /*sm = convert_number(sum, 0, chara);*/
    return (sm);
}
int isNum(char *s)
{
    while(*s++)
    {
        if (*s >= 0 && *s <= 9 )
            continue;
        else
            return (0);
    }

    return (1);
}
int main(int argc, char **argv)
{
    char command[] = "bc -l";
    int num1 = 0, num2 = 0, i = 0, sum = 0;
    char *er = "Error";
    if (argc != 3)
    {
        for(; i < _strlen(er); i++)
            _putchar(er[i]);
        _putchar('\n');
        exit(98);
    }
    if (isNum(argv[1]) == 0 || isNum(argv[2]) == 0)
    {
        for(; i < _strlen(er); i++)
            _putchar(er[i]);
        _putchar('\n');
        exit(98);
    }

    sum = atoi(argv[1]) + atoi(argv[2]);
    /*output(sum);*/
    return (0);
}
