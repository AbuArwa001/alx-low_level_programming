#ifndef MAIN_H_
#define MAIN_H_

int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
/**
 * _memset - it sets the n bytes with  b pointed to by s
 * @s: pointer to memory to be manipulated
 * @b: charcter to be used to manipulate
 * @n: number of bytes to use
 *
 * Return: it returns a pointer to s;
 */

char *_memset(char *s, char b, unsigned int n);
#endif
