#include "dog.h"

/**
 * free_dog -  frees memowry allocated to dog struct
 * @d: dog struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
