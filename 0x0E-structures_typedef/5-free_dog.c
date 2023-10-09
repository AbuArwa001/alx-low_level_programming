#include "dog.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
/**
 * free_dog -  frees memowry allocated to dog struct
 * @d: dog struct to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
    {
		free(d);
        d = NULL;
    }
    return;
}
