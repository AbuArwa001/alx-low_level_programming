#ifndef DOG_H_
#define DOG_H_
#include <stdlib.h>

/**
 * struct dog - DOg properties
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
