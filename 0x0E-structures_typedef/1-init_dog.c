#include "dog.h"

/**
 * init_dog -  initializes tog struct
 * @d: dog struct
 * @name: name of the dog
 * @age: ae of the dog
 * @owner:dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
