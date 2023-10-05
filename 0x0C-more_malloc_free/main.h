#ifndef MAIN_H_
#define MAIN_H_
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - computes the size of a string
 *
 * @s: the string to be examined
 * Return: returns the length in number
 */
int _strlen(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif
