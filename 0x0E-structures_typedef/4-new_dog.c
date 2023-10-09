#include "dog.h"
#include "1-init_dog.c"

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: returns a pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dg, *d = &dg;

	init_dog(d, name, age, owner);

	if (d == NULL)
	{
		return (NULL);
	}

	return (d);
}
