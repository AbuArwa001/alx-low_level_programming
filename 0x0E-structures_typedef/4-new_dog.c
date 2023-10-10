#include "dog.h"
#include "1-init_dog.c"
#include "2-strlen.c"
#include "1-memcpy.c"

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
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: returns a pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	init_dog(d, name, age, owner);
	d->name = malloc(sizeof(char) * _strlen(name) + 1);
	d->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (d->name == NULL || d->owner == NULL)
	{
		if (d->name != NULL)
			free(d->name);

		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}

	_memcpy(d->name, name, _strlen(name));
	_memcpy(d->owner, owner, _strlen(owner));
	d->age = age;

	return (d);
}
