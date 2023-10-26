#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

/**
 * _strlen - String length
 *
 * @s: The string to be measured
 *
 * Return: The length of @s
 */
int _strlen(const char *s);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
