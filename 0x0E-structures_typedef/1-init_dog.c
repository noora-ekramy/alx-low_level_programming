#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes
 * @d: pointer to struct
 * @name: parameter
 * @age: parameter
 * @owner: pinter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
