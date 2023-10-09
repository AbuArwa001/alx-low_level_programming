#ifndef MAIN_H_
#define MAIN_H_
#include <stdlib.h>

/**
 * _memcpy - copies n bytes from memory area src to memory
 *           area dest
 * @dest: destination memory area of src
 * @src: source memory area to be copued
 * @n: number of bytes to be copied
 *
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _strlen - computes the size of a string
 *
 * @s: the string to be examined
 * Return: returns the length in number
 */
int _strlen(char *s);

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#endif
