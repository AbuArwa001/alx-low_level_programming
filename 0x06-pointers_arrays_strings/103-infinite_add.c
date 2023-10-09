#include "main.h"
#include "_atoi.c"
#include "0-strcat.c"
/**
 * print_number - prints integers using _putchar
 * @n: is the number to be printed
 */
char *convert_number(int n, char *res)
{
    while ( n/10 != 0) {
    /* _strcat(res, (n % 10 + "0"));*/
        n /= 10;
    }

	return (res);
}

/**
 * infinite_add - adds two numbers assuming n1 & n2 will always be negativw
 * @n1: number to be used as multiplier
 * @n2: second number operand
 * @r: string pointer to the result
 * @size_r: buffer size
 * Return: will return the string result on success
 *         will return 0 on failiure to store
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    unsigned  long int in = 0;

   in = _atoi(n1) + _atoi(n2);
   printf("n1 = %d\n", atoi(n1));
   convert_number(in," ");
    if (_strlen(r) > size_r)
    {
        return (0);
    }else {
        return (r);
    }
}
