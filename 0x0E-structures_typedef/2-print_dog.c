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
		if (!d->age)
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		else
			printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
	{
		printf("%s", "");
	}
}
