#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints dog struct
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->owner)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
