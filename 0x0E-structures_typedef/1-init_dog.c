#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: the pointer to the new structure argument from the struct
 * @name: pointer to the dogs name
 * @age: the dogs age
 * @owner: pointer to the owner of the dogs name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
