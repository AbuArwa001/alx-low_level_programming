#include "main.h"
/**
 * _calloc - Allocates memof an array nmemb elements
 *           of size bytes each
 * @nmemb: number of elements to be given memory
 * @size: size of each element
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int i = 0;
	char *pChar = NULL;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	pChar = (char *)ptr;

	while (ptr)
	{
		if (i < nmemb)
			*pChar++ = 0;
		else
			break;

		i++;
	};

	return (ptr);
}
